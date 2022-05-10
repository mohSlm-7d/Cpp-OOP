#pragma once
#include<string>
#include"Patient.h"
using namespace std;
class Out_patient : public Patient {
private:
	string docName;
	string diagnosis;
	double amount;
public:
	Out_patient(string name, int nationalNo, string* symptoms, int size, Date date, string docName, string diagnosis, double amount);
	void set_docName(string docName);
	string get_docName();
	void set_diagnosis(string diagnosis);
	string get_diagnosis();
	void set_amount(double amount);
	double get_amount();
	void printInformation();
};