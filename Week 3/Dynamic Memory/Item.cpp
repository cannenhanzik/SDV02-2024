#include "Item.h"
#include <iostream>

Item::Item(const char* _name, int _value) : m_Name(_name), m_Value(new int(_value))
{
}

Item::~Item() // Implement the destructor
{
    delete m_Value;
}

void Item::Print() const
{
    std::cout << m_Name << "\t" << *m_Value << std::endl;
}
