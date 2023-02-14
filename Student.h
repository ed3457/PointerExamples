#pragma once
#include <string>
using namespace std;

class Student
{
private:
	float gpa;
	string name; 

public:

	void setGPA(float g);
	float getGPA();

	string getName();

	void setName(string n);
	Student();
};

