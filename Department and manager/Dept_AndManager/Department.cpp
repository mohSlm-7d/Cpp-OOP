#include"Department.h"
#include<iostream>
#include<string>
using namespace std;

Department::Department(string n, Manager m) {
	name = n;
	manager = m;
}
Department::Department(const Department& d, string t) {
	manager = d.manager;
	AvgSalary = d.AvgSalary;
	noOfEmp = d.noOfEmp;
	name = t;
}
string Department::getname() {
	return name;
}
Manager Department::getmanager() {
	return manager;
}
double Department::getAvgSalary() {
	return AvgSalary;
}
int Department::getnoOfEmp() {
	return noOfEmp;
}
void Department::setAvgSalary(double a) {
	AvgSalary = a;
}
void Department::setnoOfEmp(int n) {
	noOfEmp = n;
}
double Department::computeTax(double tax) 
{
	double Total_tax;
	if (AvgSalary >= 650) {
		Total_tax = AvgSalary * tax;
		
	}
	else
	{
		Total_tax = 0;
		
	}
	return Total_tax;
}