#include<iostream>
#include<string>
#include"Date.h"
#include"Patient.h"
#include"Out-patient.h"
#include"In-patient.h"
#include"COVID-patient.h"
using namespace std;
void main() {
	int choice, type, nationalNo, day, month, year, size;
	string name;
	string* symptoms;
	string docName;
	string diagnosis;
	double amount;
	string ward;
	string monitoringDoc;
	int daysNo;
	bool Oflag,ICUflag;
	int ICUdays;
	do
	{
		cout << "Entering a new patient enter. To exit the program, enter (-1)" << endl;
		cin >> choice;
		if (choice != -1){
			cout << "Please choose the patient type from the following types: \n1.Out-patient\n2.In-patient\n3.Covid-patient" << endl;
			cout << "Please enter your choice: ";
			cin >> type;
			switch (type) {
			case 1: {

				cout << "Enter the patient name: ";
				cin >> name;
				cout << "Enter the patient national number: ";
				cin >> nationalNo;
				cout << "Enter the patient birth date: " << endl << "day: ";
				cin >> day;
				cout << "month: ";
				cin >> month;
				cout << "year: ";
				cin >> year;
				Date BOD;
				BOD.set_day(day);
				BOD.set_month(month);
				BOD.set_year(year);
				cout << "Please enter the number of symptoms: ";
				cin >> size;
				symptoms = new string[size];
				for (int i = 0; i < size; i++)
					cin >> symptoms[i];
				cout <<endl<< "Enter the doctor name: ";
				cin >> docName;
				cout << "Enter the diagnosis: ";
				cin >> diagnosis;
				cout << "Enter the fees for this patient: ";
				cin >> amount;
				Out_patient patient(name, nationalNo, symptoms, size, BOD, docName, diagnosis, amount);

			}
			case 2: {
				cout << "Enter the patient name: ";
				cin >> name;
				cout << "Enter the patient national number: ";
				cin >> nationalNo;
				cout << "Enter the patient birth date: " << endl << "day: ";
				cin >> day;
				cout << "month: ";
				cin >> month;
				cout << "year: ";
				cin >> year;
				Date BOD;
				BOD.set_day(day);
				BOD.set_month(month);
				BOD.set_year(year);
				cout << "Please enter the number of symptoms: ";
				cin >> size;
				symptoms = new string[size];
				for (int j = 0; j < size; j++)
					cin >> symptoms[j];
				cout << "Please enter the ward the patient stayed in: ";
				cin >> ward;
				cout << "Please enter the name of the monitoring doctor: ";
				cin >> monitoringDoc;
				cout << "Please enter the number of days the patient stayed in the hospital: ";
				cin >> daysNo;
				cout << "Enter the diagnosis: ";
				cin >> diagnosis;
				In_patient patient(name, nationalNo, symptoms, size, BOD, ward, monitoringDoc, daysNo, diagnosis);
			}
			case 3: {
				cout << "Enter the patient name: ";
				cin >> name;
				cout << "Enter the patient national number: ";
				cin >> nationalNo;
				cout << "Enter the patient birth date: " << endl << "day: ";
				cin >> day;
				cout << "month: ";
				cin >> month;
				cout << "year: ";
				cin >> year;
				Date BOD;
				BOD.set_day(day);
				BOD.set_month(month);
				BOD.set_year(year);
				cout << "Please enter the number of symptoms: ";
				cin >> size;
				symptoms = new string[size];
				for (int j = 0; j < size; j++)
					cin >> symptoms[j];
				cout << "Did the patient need suplemental oxygen treatment(Enter true if yes, Enter false if no): ";
				cin >> Oflag;
				cout << "Did the patient need ICU(Enter true if yes, Enter false if no): ";
				cin >> ICUflag;
				if (ICUflag)
					cout << "Enter the number of days patient stayed in the ICU: ";
				cin >> ICUdays;
				COVID_patient patient(name, nationalNo, symptoms, size, BOD, ward, monitoringDoc, daysNo, diagnosis,Oflag,ICUflag,ICUdays);
			}
			}

		}
	} while (true);
}