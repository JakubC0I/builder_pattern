#include "models/Cook.h"
#include "builders/PizzaBuilder.hpp"
#include "builders/HawaiianPizzaBuilder.cpp"
#include "builders/SpicyPizzaBuilder.cpp"

// A little testing
int main()
{
    Cook cook;
    PizzaBuilder* hawaiianPizzaBuilder = new HawaiianPizzaBuilder;
    PizzaBuilder* spicyPizzaBuilder = new SpicyPizzaBuilder;

    cook.makePizza(hawaiianPizzaBuilder);
    cook.openPizza();

    cook.makePizza(spicyPizzaBuilder);
    cook.openPizza();

    delete hawaiianPizzaBuilder;
    delete spicyPizzaBuilder;

    return 0;
}