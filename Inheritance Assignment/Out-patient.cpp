#include<iostream>
#include<string>
#include "Out-patient.h"
using namespace std;
Out_patient::Out_patient(string name, int nationalNo, string* symptoms, int size, Date date, string docName, string diagnosis, double amount):Patient(name, nationalNo, symptoms, size, date){
	this->docName = docName;
	this->diagnosis = diagnosis;
	this->amount = amount;
}

void Out_patient::set_docName(string docName){
	this->docName = docName;
}

string Out_patient::get_docName(){
	return docName;
}

void Out_patient::set_diagnosis(string diagnosis){
	this->diagnosis = diagnosis;
}

string Out_patient::get_diagnosis(){
	return diagnosis;
}

void Out_patient::set_amount(double amount){
	this->amount = amount;
}

double Out_patient::get_amount(){
	return amount;
}

void Out_patient::printInformation(){
	Patient::printInformation();
	cout << endl << "The doctor name: " << this->get_docName() << endl;
	cout << "Diagnosis: " << this->get_diagnosis() << endl;
	cout << "The flat fee for the amount the patient paid for the visit: " << this->get_amount() << endl;
	
}
