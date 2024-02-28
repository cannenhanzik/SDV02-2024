#include <vector>
#include <string>
#include "Base.h"
#include "Employee.h"
#include "Student.h"

void AddRecord(vector<Base*>& v);
void DisplayRecords(vector<Base*>& v);
void DuplicateRecord(vector<Base*>& v);

int main() {
	vector<Base*> records;

	bool running = true;
	while (running) {
		int choice;
		cout << "1. Add Record\n2. Display Records\n3. Duplicate Record\n4. Exit\nEnter choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			AddRecord(records);
			break;
		case 2:
			DisplayRecords(records);
			break;
		case 3:
			DuplicateRecord(records);
			break;
		case 4: 
			running = false;
			break;
		default:
			cout << "Invalid choice. Please Try Again.\n";
			break;
		}
	}

	// cleanup
	for (auto* record : records) {
		delete record;
	}
	return 0;
}

void AddRecord(vector<Base*>& v) {
	int type;
	cout << "Type of record? (1 for Employee, 2 for Student): ";
	cin >> type;

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	if (type == 1) {
		Employee* emp = new Employee();
		string name;
		int salary;

		cout << "Enter name: ";
		getline(cin, name);
		emp->SetName(name.c_str());
		cout << "Enter salary: ";
		cin >> salary;
		emp->SetSalary(salary);
		v.push_back(emp);
	}
	else if (type == 2) {
		Student* stu = new Student();
		string sName;
		float GPA;
		cout << "Enter name: ";
		getline(cin, sName);
		stu->SetName(sName.c_str());
		cout << "Enter GPA: ";
		cin >> GPA;
		stu->SetGPA(GPA);
		v.push_back(stu);
	}
	else {
		cout << "Invalid type. Returning to menu.\n";
	}
}

void DisplayRecords(vector<Base*>& v) {
	for (auto* record : v) {
		record->DisplayRecord();
	}
}

void DuplicateRecord(vector<Base*>& v) {
	int index;
	cout << "Enter the index of the record to duplicate: ";
	cin >> index;

	if (index < 0 || index >= v.size()) {
		cout << "Invalid index. Returning to menu.\n";
		return;
	}

	Base* original = v[index];
	Employee* emp = dynamic_cast<Employee*>(original);
	Student* stu = dynamic_cast<Student*>(original);

	if (emp) {
		Employee* newEmp = new Employee(*emp);
		v.push_back(newEmp);
	}
	else if (stu) {
		Student* newStu = new Student(*stu);
		v.push_back(newStu);
	}
	else {
		cout << "Record type unknown. Cannot duplicate.\n";
	}
}