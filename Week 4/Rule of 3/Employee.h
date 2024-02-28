#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Base.h"

class Employee : public Base {
private:
	int salary; // Salary of employee

public:
	Employee() : salary(0) {}; // Default
	void SetSalary(int salary); // Used to set salary
	virtual void DisplayRecord() override; // Overrides the method for employee details
};

#endif