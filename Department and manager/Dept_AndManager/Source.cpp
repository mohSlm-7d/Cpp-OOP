#include<iostream>
#include<string>
#include"Manager.h"
#include"Department.h"
using namespace std;

void main() {
	Manager Manager1("Paul Barry", "paul.barry@gmail.com", 'm');
	Department Dept1("Software Design", Manager1);
	Dept1.setAvgSalary(750);
	Dept1.setnoOfEmp(10);
	Department Dept2(Dept1, "Software Testing");
	Dept2.setAvgSalary(600);
	Dept2.setnoOfEmp(7);
	cout << "which Department would you like to check?" << endl;
	cout << "1) software Design" << endl;
	cout << "2) software Testing" << endl;
	cout << "1) I would not" << endl;
	cout << "*********" << endl;
	int x;
	char z;
	cin >> x;
	if (x == 1)
		cout << "The manager of " << Dept1.getname() << " department is " << Dept1.getmanager().getname() << " and includes" << Dept1.getnoOfEmp() <<
		"employees, press Y to confirm the order or N to cancel it" << endl;
	if (x == 2)
		cout << "The manager of" << Dept2.getname() << "department is" << Dept2.getmanager().getname() << " and includes" << Dept2.getnoOfEmp() <<
		"employees, press Y to confirm the order or N to cancel it" << endl;
	if (x == 3)
		cout << endl;
	if (x != 3) {
		cin >> z;
		if (z == 'Y') {
			cout << "*********" << endl;
			cout << "please enter the tax ratio" << endl;
			double y;
			cin >> y;
			cout << "*********" << endl;
			
			cout << "Done, the total tax is" << Dept2.computeTax(y) << endl;
		}
		else if (z == 'N')
			cout << endl;
		else
			cout << "Have a nice day" << endl;

	}
}