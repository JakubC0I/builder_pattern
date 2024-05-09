#include "../builders/PizzaBuilder.hpp"

class Cook
{
public:
void openPizza();
void makePizza(PizzaBuilder* pb);
private:
    PizzaBuilder* m_pizzaBuilder;
};