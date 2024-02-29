#include "Store.h"

Store::Store() : m_Inventories(new Inventory[m_NumInventories])
{
}

Store::~Store() // Implement the destructor
{
    delete[] m_Inventories;
}

void Store::Print() const
{
    for (unsigned int i = 0; i < m_NumInventories; ++i)
    {
        m_Inventories[i].Print();
    }
}
