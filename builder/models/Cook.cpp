#include "../builders/PizzaBuilder.hpp"
#include "Cook.h"

// "Director"

void Cook::openPizza() { m_pizzaBuilder->getPizza()->open(); }
void Cook::makePizza(PizzaBuilder* pb) {
        m_pizzaBuilder = pb;
    m_pizzaBuilder->createNewPizzaProduct();
    m_pizzaBuilder->buildDough();
    m_pizzaBuilder->buildSauce();
    m_pizzaBuilder->buildTopping();
}
