#pragma once
#include<iostream>
#include<string>
#include"Manager.h"
using namespace std;

class Department {
private:
	string name;
	Manager manager;
	double AvgSalary;
	int noOfEmp = 0;

public:
	Department(string n, Manager m);
	Department(const Department& d, string t);
	string getname();
	Manager getmanager();
	double getAvgSalary();
	int getnoOfEmp();
	void setAvgSalary(double a);
	void setnoOfEmp(int n);
	double computeTax(double tax);


};