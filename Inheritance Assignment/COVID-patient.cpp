#include<iostream>
#include "COVID-patient.h"
#include<string>
using namespace std;
COVID_patient::COVID_patient(string name, int nationalNo, string* symptoms, int size, Date date, string monitoringDoc, int daysNo, bool oxygen_flag, bool ICU_flag, int daysIn_ICU):In_patient(name, nationalNo, symptoms, size, date, "COVID", monitoringDoc, daysNo, "COVID-19") {
	this->oxygen_flag = oxygen_flag;
	this->ICU_flag = ICU_flag;
	this->daysIn_ICU = daysIn_ICU;
}
void COVID_patient::set_oxygen_flag(bool oxygen_flag){
	this->oxygen_flag = oxygen_flag;
}
bool COVID_patient::get_oxygen_flag(){
	return oxygen_flag;
}
void COVID_patient::set_ICU_flag(bool ICU_flag){
	this->ICU_flag = ICU_flag;
}
bool COVID_patient::get_ICU_flag(){
	return ICU_flag;
}
void COVID_patient::set_daysIn_ICU(int daysIn_ICU){
	this->daysIn_ICU = daysIn_ICU;
}
int COVID_patient::get_daysIn_ICU(){
	return daysIn_ICU;
}
double COVID_patient::CalculateHospitalFee(){
	
	return (this->get_daysNo() * (50 + (20 * this->get_oxygen_flag()) + this->get_daysIn_ICU() * 50));
}

void COVID_patient::printInformation(){
	In_patient::printInformation();
	cout << endl << "Suplimental Oxygen treatment: ";
	if (this->get_oxygen_flag())
		cout << "The patient was given suplimental oxygen treatment." << endl;
	else
		cout<<"The patient wasn't given suplimental oxygen treatment." << endl;
	cout << "ICU: ";
	if (this->get_ICU_flag()) {
		cout << "The patient needed the ICU." << endl;
		cout << "The number of days the patient stayed in the ICU: " << this->get_daysIn_ICU() << endl;
	}
	else 
		cout << "The patient didnt't need the ICU." << endl;
}

