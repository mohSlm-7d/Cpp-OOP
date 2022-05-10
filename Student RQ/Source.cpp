#include<iostream>
#include<string>
using namespace std;
class Student
{
	string name;
	int id;
	int marks[4][2];
public:
	void set_name();
	void set_id();
	void setMarksAndCreditHours();
	string get_name() { return name; }
	int get_id() { return id; }
	void printMarksAndCreditHours();
	double calculateGPA();
	bool isDistinction(double GPA);
	double calculateRealGPA();
};
void main()
{
	double GPA;
	Student S1;
	S1.set_name();
	S1.set_id();
	S1.setMarksAndCreditHours();
	cout << endl << "The student information is as following:" << endl;
	cout << "Student Name: " << S1.get_name() << endl;
	cout << "Student ID: " << S1.get_id() << endl;
	cout << "Student  Marks: " << endl;
	S1.printMarksAndCreditHours();
	GPA = S1.calculateGPA();
	cout << endl << "Student GPA: " << GPA;
	if (S1.isDistinction(GPA) == true)
		cout << endl << "The student is Distinction.";
	else
		cout << endl << "The student is not Distinction.";
	cout << endl << "Real Student GPA: " << S1.calculateRealGPA() << endl;
	Student S2;
	S2.set_name();
	S2.set_id();
	S2.setMarksAndCreditHours();
	cout << endl << "The student information is as following:" << endl;
	cout << "Student Name: " << S2.get_name() << endl;
	cout << "Student ID: " << S2.get_id() << endl;
	cout << "Student  Marks: " << endl;
	S2.printMarksAndCreditHours();
	GPA = S2.calculateGPA();
	cout << endl << "Student GPA: " << GPA;
	if (S2.isDistinction(GPA) == true)
		cout << endl << "The student is Distinction.";
	else
		cout << endl << "The student is not Distinction.";
	cout << endl << "Real Student GPA: " << S2.calculateRealGPA();
	if (S1.calculateGPA() > S2.calculateGPA())
		cout << endl << S1.get_name() << " has a better GPA than " << S2.get_name();
	else if (S2.calculateGPA() > S1.calculateGPA())
		cout << endl << S2.get_name() << " has a better GPA than " << S1.get_name();
	else
		cout << endl << S1.get_name() << " and " << S2.get_name() << " have equal GPAs.";
}
void Student::set_name()
{
	cout << "Please enter the student name: ";
	cin >> name;
}
void Student::set_id()
{
	cout << "Please enter the student ID: ";
	cin >> id;
}
void Student::setMarksAndCreditHours()
{
	for (int i = 0; i < 4; i++)
	{
		cout << "Please enter a course mark and credit hours: ";
		cin >> marks[i][0];
		cin >> marks[i][1];
	}
}
void Student::printMarksAndCreditHours()
{
	for (int i = 0; i < 4; i++)
	{
		cout << marks[i][0] << "\t" << marks[i][1] << endl;
	}
}
double Student::calculateGPA()
{
	double total = 0;
	int credit_hr = 0;
	for (int i = 0; i < 4; i++)
	{
		total += marks[i][0] * marks[i][1];
		credit_hr += marks[i][1];
	}
	return(total / credit_hr);
}
bool Student::isDistinction(double GPA)
{
	if (GPA > 80)
		return true;
	else
		return false;
}
double Student::calculateRealGPA()
{
	double total = 0;
	int credit_hr = 0;
	for (int i = 0; i < 4; i++)
	{
		if (marks[i][0] >= 50)
		{
			total += marks[i][0] * marks[i][1];
			credit_hr += marks[i][1];
		}
	}
	return total / credit_hr;
}