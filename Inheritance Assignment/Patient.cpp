#include<iostream>
#include "Patient.h"
using namespace std;
Patient::Patient(string name, int nationalNo,string*symptoms, int size,Date date){
	this->name = name;
	if (nationalNo / 1000000000 != 0 && nationalNo / 10000000000 == 0)
		this->nationalNo = nationalNo;

	else
		cout << endl << "The national number consist of 10 digits only.";
	
	//Initializing symptoms.
	this->set_symptoms(symptoms,size);
	
	//Checking whether the birth date is valid or not by friend function(checkDate()).
	if (checkDate(date)) {
		birth_date.set_day(date.get_day());
		birth_date.set_month(date.get_month());
		birth_date.set_year(date.get_year());
	}
	else
		cout << endl << "Please enter a valid birth date.";
}

void Patient::set_name(string name){
	this->name = name;
}

string Patient::get_name(){
	return name;
}

void Patient::set_nationalNo(int nationalNo){
	this->nationalNo = nationalNo;
}

int Patient::get_nationalNo(){
	return nationalNo;
}

void Patient::set_birth_date(Date date){
	if (checkDate(date)) {
		birth_date.set_day(date.get_day());
		birth_date.set_month(date.get_month());
		birth_date.set_year(date.get_year());
	}
}

Date Patient::get_birth_date(){
	return birth_date;
}

void Patient::set_symptoms(string* symptoms,int size){
	this->size = size;
	symptoms = new string[this->size];
	this->symptoms = symptoms;
}

string Patient::get_symptoms(int i){
	return symptoms[i];
}

void Patient::set_size(int size){
	this->size = size;
}

int Patient::get_size(){
	return size;
}

void Patient::printInformation(){
	cout << endl << "The Patient Information: " << endl;
	cout << "Name: " << this->get_name() << endl;
	cout << "National No: " << this->get_nationalNo() << endl;
	cout << "Birth date: " << this->birth_date.get_day() << "\/" << this->birth_date.get_month() << "\/" << this->birth_date.get_year() << endl;
	cout << "The symptoms: " << endl;
	for (int i = 0; i < this->get_size(); i++)
		cout << this->get_symptoms(i) << endl;
}
