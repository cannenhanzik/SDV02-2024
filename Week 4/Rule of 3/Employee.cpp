#include "Employee.h"

void Employee::SetSalary(int salary) {
	this->salary = salary;
}

void Employee::DisplayRecord() {
	cout << "Name: " << GetName() << ", Salary: " << salary << endl;
}