#ifndef BASE_H
#define BASE_H

#include <iostream>
using namespace std;

class Base {
private:
	char* name; // Allocating memory to store name

protected:
	char* CopyString(const char* source);

public:
	Base(); // Default constructor
	Base(const Base& copy); // Copy of default
	Base& operator=(const Base& copy); 
	virtual ~Base(); // Destructor

	void SetName(const char* name); // Sets name
	char* GetName() const; // returns name

	virtual void DisplayRecord() = 0;
};

#endif