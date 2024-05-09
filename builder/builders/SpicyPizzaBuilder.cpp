#include "PizzaBuilder.hpp"

// "ConcreteBuilder"
class SpicyPizzaBuilder : public PizzaBuilder
{
public:
    virtual ~SpicyPizzaBuilder() {};
    virtual void buildDough() { m_pizza->setDough("pan baked"); }
    virtual void buildSauce() { m_pizza->setSauce("hot"); }
    virtual void buildTopping() { m_pizza->setTopping("pepperoni+salami"); }
};