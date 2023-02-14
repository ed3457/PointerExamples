#include "Student.h"

void Student::setGPA(float g)
{
	gpa = g;
}

float Student::getGPA()
{
	return gpa;
}

string Student::getName()
{
	return name;
}

void Student::setName(string n)
{
	name = n;
}

Student::Student()
{
	setGPA(0);
	setName("not-set");
}
