#include <string>
#ifndef PIZZA_H
#define PIZZA_H

class Pizza
{
private:
    std::string m_dough;
    std::string m_sauce;
    std::string m_topping;
public:
    void setDough(const std::string& dough);
    void setSauce(const std::string& sauce);
    void setTopping(const std::string& topping);
    void open();

};
#endif