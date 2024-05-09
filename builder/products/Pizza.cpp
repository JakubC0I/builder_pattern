// "Product"
#include <iostream>
#include <string>
#include "Pizza.h"

void Pizza::setDough(const std::string& dough) { m_dough = dough; }
void Pizza::setSauce(const std::string& sauce) { m_sauce = sauce; }
void Pizza::setTopping(const std::string& topping) { m_topping = topping; }
void Pizza::open() {
    std::cout << "Pizza with " << m_dough << " dough, " << m_sauce << " sauce and "
        << m_topping << " topping. Mmm." << std::endl;
}
