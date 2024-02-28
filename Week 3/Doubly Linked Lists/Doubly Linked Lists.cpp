#include <iostream>
#include "DList.h"
using namespace std;

// Helper function to print contents of list
template<typename T>
void printList(DList<T>& list) {
	cout << "List contents: ";
	for (int i = 0; i < list.GetCount(); ++i) {
		cout << list[i] << " ";
	}
	cout << '\n';
}
int main()
{
	DList<int> myList;

	// Demonstrate push_back
	cout << "Pushing back: 10, 20, 30\n";
	myList.push_back(10);
	myList.push_back(20);
	myList.push_back(30);
	printList(myList);

	// Demonstrate Push_Front
	cout << "Pushing front: 5, 2\n";
	myList.Push_Front(5);
	myList.Push_Front(2);
	printList(myList);

	// Demonstrate Erase
	cout << "Erasing index 2 (value 10)\n";
	myList.Erase(2);
	printList(myList);

	// Demonstrate Clear
	cout << "Clearing the list\n";
	myList.Clear();
	printList(myList);

	return 0;

}
