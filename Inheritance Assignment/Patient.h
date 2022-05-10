#pragma once
#include<string>
#include"Date.h"
using namespace std;
class Patient {
private:
	string name;
	int nationalNo;
	Date birth_date;
	string* symptoms;
	int size;
public:
	Patient(string name, int nationalNo, string* symptoms, int size, Date date);
	void set_name(string name);
	string get_name();
	void set_nationalNo(int nationalNo);
	int get_nationalNo();
	void  set_birth_date(Date date);
	Date get_birth_date();
	void set_symptoms(string* symptoms, int size);
	string get_symptoms(int i);
	void set_size(int size);
	int get_size();
	virtual void printInformation();
	
};