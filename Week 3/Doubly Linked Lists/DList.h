#pragma once

#include <iostream>
#define TH template<typename Type>

template<typename Type = int>
class DList
{
private:

	struct node
	{
		node* next, * prev;
		Type data;

		node(Type& _data, node* _prev = nullptr, node* _next = nullptr)
			: data(_data), prev(_prev), next(_next) {}
	};

	int count;
	node* first, * last;

public:
	DList() { first = last = nullptr; count = 0; }
	~DList();

	int GetCount() { return count; }

	void push_back(Type _data);
	void Push_Front(Type _data);
	void Clear();
	void Erase(int _index);

	Type& operator[](int _index);
	const Type& operator[](int _index) const;

};



TH

void DList<Type>::Clear()
{
	node* current = first;
	while (current != nullptr)
	{
		node* next = current->next;
		delete current;
		current = next;
	}
	first = last = nullptr;
	count = 0;
}

TH
void DList<Type>::Push_Front(Type _data)
{
	node* n = new node(_data, nullptr, first);

	if (first != nullptr)
		first->prev = n;
	else
		last = n;

	first = n;
	++count;
}

TH
void DList<Type>::Erase(int _index)
{
	if (_index < 0 || _index >= count)
		return;

	node* temp = first;
	for (int i = 0; i < _index; ++i)
		temp = temp->next;

	if (temp->prev)
		temp->prev->next = temp->next;
	else // Removing the first node
		first = temp->next;

	if (temp->next)
		temp->next->prev = temp->prev;
	else // Removing the last node
		last = temp->prev;

	delete temp;
	--count;
}

TH
void DList<Type>::push_back(Type _data)
{
	node* n = new node(_data, last);

	if (last)
		last->next = n;
	else
		first = n;

	last = n;

	++count;
}

template<typename Type>
DList<Type>::~DList()
{
	Clear(); // Uses clear to destruct
}

template<typename Type>
Type& DList<Type>::operator[](int _index)
{
	node* temp = first;

	for (int i = 0; i < _index; ++i)
		temp = temp->next;

	return temp->data;
}

template<typename Type>
const Type& DList<Type>::operator[](int _index) const
{
	node* temp = first;

	for (int i = 0; i < _index; ++i)
		temp = temp->next;

	return temp->data;
}