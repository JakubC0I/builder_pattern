#ifndef PIZZABUILDER_H
#define PIZZABUILDER_H

#include "../products/Pizza.h"

class PizzaBuilder
{
protected:
    Pizza* m_pizza;
public:
    virtual ~PizzaBuilder() {};
    Pizza* getPizza() { return m_pizza; }
    void createNewPizzaProduct() { m_pizza = new Pizza; }
    virtual void buildDough() = 0;
    virtual void buildSauce() = 0;
    virtual void buildTopping() = 0;
};

#endif // PIZZABUILDER_H