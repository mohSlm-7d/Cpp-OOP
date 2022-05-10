#pragma once
#include<string>
#include"Patient.h"
using namespace std;
class In_patient : public Patient {
private:
		string ward;
		string monitoringDoc;
		int daysNo;
		string diagnosis;
public:
	In_patient(string name, int nationalNo, string* symptoms, int size, Date date, string ward, string monitoringDoc, int daysNo, string diagnosis);
	void set_ward(string ward);
	string get_ward();
	void set_monitoringDoc(string monitoringDoc);
	string get_monitoringDoc();
	void set_daysNo(int daysNo);
	int get_daysNo();
	void set_diagnosis(string diagnosis);
	string get_diagnosis();
	virtual double CalculateHospitalFee();
	void printInformation();
};