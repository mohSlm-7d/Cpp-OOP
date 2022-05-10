#include<iostream>
#include "In-patient.h"
using namespace std;
In_patient::In_patient(string name, int nationalNo, string* symptoms, int size, Date date, string ward, string monitoringDoc, int daysNo, string diagnosis) :Patient(name, nationalNo, symptoms, size, date) {
	this->ward = ward;
	this->monitoringDoc = monitoringDoc;
	this->daysNo = daysNo;
	this->diagnosis = diagnosis;
}
void In_patient::set_ward(string ward){
	this->ward = ward;
}
string In_patient::get_ward()
{
	return ward;
}
void In_patient::set_monitoringDoc(string monitoringDoc){
	this->monitoringDoc = monitoringDoc;
}
string In_patient::get_monitoringDoc(){
	return monitoringDoc;
}
void In_patient::set_daysNo(int daysNo){
	this->daysNo = daysNo;
}
int In_patient::get_daysNo(){
	return daysNo;
}
void In_patient::set_diagnosis(string diagnosis){
	this->diagnosis = diagnosis;
}
string In_patient::get_diagnosis(){
	return diagnosis;
}
double In_patient::CalculateHospitalFee() {
//	cout << endl << "The Hospital Fee is: "
	 return (daysNo * 50);
}

void In_patient::printInformation(){
	Patient::printInformation();
	cout << endl << "The ward that the patient stayed in: " << this->get_ward() << endl;
	cout << "The name of the monitoring doctor: " << this->get_monitoringDoc() << endl;
	cout << "The number of the days the patient stayed in the hospital: " << this->get_daysNo() << endl;
	cout << "The diagnosis: " << this->get_diagnosis() << endl;
}
