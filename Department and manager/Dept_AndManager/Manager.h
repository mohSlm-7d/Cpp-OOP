#pragma once
#include<iostream>
#include<string>
using namespace std;

class Manager {
private:
	string name;
	string email;
	char gender;

public:
	Manager();
	Manager(string n, string e, char g);
	string getname();
	string getemail();
	char getgender();

};
