CC=g++
CFLAGS=-I./builders -I./models

all: main

main: main.o Cook.o HawaiianPizzaBuilder.o SpicyPizzaBuilder.o Pizza.o
				$(CC) -o main main.o Cook.o HawaiianPizzaBuilder.o SpicyPizzaBuilder.o Pizza.o

main.o: main.cpp models/Cook.h builders/PizzaBuilder.hpp builders/HawaiianPizzaBuilder.cpp builders/SpicyPizzaBuilder.cpp products/Pizza.cpp
				$(CC) $(CFLAGS) -c main.cpp

Cook.o: models/Cook.cpp models/Cook.h
				$(CC) $(CFLAGS) -c models/Cook.cpp

Pizza.o: products/Pizza.cpp products/Pizza.h
				$(CC) $(CFLAGS) -c products/Pizza.cpp

HawaiianPizzaBuilder.o: builders/HawaiianPizzaBuilder.cpp builders/PizzaBuilder.hpp products/Pizza.cpp
				$(CC) $(CFLAGS) -c builders/HawaiianPizzaBuilder.cpp

SpicyPizzaBuilder.o: builders/SpicyPizzaBuilder.cpp builders/PizzaBuilder.hpp products/Pizza.cpp
				$(CC) $(CFLAGS) -c builders/SpicyPizzaBuilder.cpp

clean:
				rm -f *.o main