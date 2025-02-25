#include "PizzaBuilder.hpp"

// "ConcreteBuilder"
class HawaiianPizzaBuilder : public PizzaBuilder
{
public:
    virtual ~HawaiianPizzaBuilder() {};
    virtual void buildDough() { m_pizza->setDough("cross"); }
    virtual void buildSauce() { m_pizza->setSauce("mild"); }
    virtual void buildTopping() { m_pizza->setTopping("ham+pineapple"); }
};