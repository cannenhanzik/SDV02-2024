#pragma once
#include "Item.h"
#include <vector>
#include <iostream>
#include <string>

class Inventory
{
    std::vector<Item*> m_Items;
    static unsigned int m_ItemsMade; // Declaration

    void CreateItem()
    {
        std::string name = "Item " + std::to_string(m_ItemsMade);
        m_Items.push_back(new Item(name.c_str(), 100 * m_ItemsMade));
        ++m_ItemsMade;
    }

public:
    Inventory()
    {
        CreateItem();
        CreateItem();
        CreateItem();
    }

    ~Inventory() // Inline destructor to clean up Item pointers in m_Items
    {
        for (Item* item : m_Items)
        {
            delete item;
        }
    }

    void Print() const // Inline function to print inventory items
    {
        std::cout << "_____INVENTORY_____\n";
        for (size_t i = 0; i < m_Items.size(); ++i)
        {
            m_Items[i]->Print();
        }
    }
};
