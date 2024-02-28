#include "Student.h"

void Student::SetGPA(float GPA) {
	this->GPA = GPA;
}

void Student::DisplayRecord() {
	cout << "Name: " << GetName() << ", GPA: " << GPA << endl;
}