#pragma once

#include <string>

class Item
{
    std::string m_Name;
    int* m_Value = nullptr;

public:
    Item(const char* _name, int _value);
    ~Item(); // Destructor to clean up m_Value
    void Print() const;
};
