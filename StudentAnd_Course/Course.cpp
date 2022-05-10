#include "Course.h"
using namespace std;
Course::Course() {
	courseCode = "";
	creditHours = 0;
	Grade = 0;
}

void Course::set_courseCode(string courseCode){
	this->courseCode = courseCode;
}

void Course::set_creditHours(int creditHours){
	this->creditHours = creditHours;
}

void Course::set_Grade(double Grade){
	this->Grade = Grade;
}

string Course::get_courseCode()
{
	return courseCode;
}

int Course::get_creditHours()
{
	return creditHours;
}

double Course::get_Grade()
{
	return Grade;
}
