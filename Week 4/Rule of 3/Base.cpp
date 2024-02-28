#include "Base.h"
#include <cstring>


// Default constructor initializes name to nullptr.
Base::Base() : name(nullptr) {}

Base::Base(const Base& copy) : name(nullptr) {
	*this = copy;
}

Base& Base::operator=(const Base& copy) {
	if (this != &copy) {
		delete[] name;
		name = CopyString(copy.name);
	}
	return *this;
}

// Destructor deallocates dynamic memory used for name.
Base::~Base() {
	delete[] name;
}

char* Base::CopyString(const char* source) {
	if (source == nullptr) {
		return nullptr;
	}
	char* copy = new char[strlen(source) + 1];
	strcpy_s(copy, strlen(source) + 1, source);
	return copy;
}

void Base::SetName(const char* name) {
	delete[] this->name;
	this->name = CopyString(name);
}

char* Base::GetName() const {
	return name;
}