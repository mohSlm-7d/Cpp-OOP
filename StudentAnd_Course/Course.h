#pragma once
#include<string>
using namespace std;
class Course {
private: 
	string courseCode;
	int creditHours;
	double Grade;
public:
	Course();
	void set_courseCode(string courseCode);
	void set_creditHours(int creditHours);
	void set_Grade(double Grade);
	string get_courseCode();
	int get_creditHours();
	double get_Grade();
};