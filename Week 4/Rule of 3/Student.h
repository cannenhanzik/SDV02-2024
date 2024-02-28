#ifndef STUDENT_H
#define STUDENT_H

#include "Base.h"

class Student : public Base {
private:
	float GPA;

public:
	Student() : GPA(0.0) {} // Default
	void SetGPA(float GPA); // Used to set GPA
	virtual void DisplayRecord() override;
};

#endif