#pragma once
#include"In-patient.h"
#include<string>
using namespace std;
class COVID_patient : public In_patient {
private:
	bool oxygen_flag;
	bool ICU_flag;
	int daysIn_ICU;
public:
	COVID_patient(string name, int nationalNo, string* symptoms, int size, Date date, string monitoringDoc, int daysNo, bool oxygen_flag, bool ICU_flag, int daysIn_ICU);
	void set_oxygen_flag(bool oxygen_flag);
	bool get_oxygen_flag();
	void set_ICU_flag(bool ICU_flag);
	bool get_ICU_flag();
	void set_daysIn_ICU(int daysIn_ICU);
	int get_daysIn_ICU();
	double CalculateHospitalFee();
	void printInformation();
};