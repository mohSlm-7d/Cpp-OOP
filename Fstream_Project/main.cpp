#include<iostream>
#include"Calc.h"
#include<string>
#include<fstream>
using namespace std;
void main() {
	string name;
	int choice;
	double num1, num2;
	ifstream in("file.txt");
	in >> name;

	ofstream out("Output.txt");
	cout << name;
	out << name;
	
	do {
		/*cout << "test" << endl;*/
		cout << "Please choose the operation drom the following: \n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division" << endl;
		cout << "Enter -1 to exit the program." << endl;
		cin >> choice;
		/*cout << "test0"<<endl;*/
		if (choice != -1) {
			/*cout << "test1"<<endl;*/
			switch (choice) {
				case 1: {
					cout << "Please enter two numbers: \nFirst number: ";
					cin >> num1;
					cout << "Second number: ";
					cin >> num2;
					cout << endl << "The answer is: ";
					cout << Calc::Addition(num1, num2);
					out << endl << Calc::Addition(num1, num2);
					break;
				}
				case 2: {
					cout << "Please enter two numbers: \nFirst number: ";
					cin >> num1;
					cout << "Second number: ";
					cin >> num2;
					cout << endl << "The answer is: ";
					cout << Calc::Subtraction(num1, num2);
					out << endl << Calc::Subtraction(num1, num2);
					break;
				}
				case 3: {
					cout << "Please enter two numbers: \nFirst number: ";
					cin >> num1;
					cout << "Second number: ";
					cin >> num2;
					cout << endl << "The answer is: ";
					cout << Calc::Multiplication(num1, num2);
					out << endl << Calc::Multiplication(num1, num2);
					break;
				}
				case 4: {
					cout << "Please enter two numbers: \nFirst number: ";
					cin >> num1;
					cout << "Second number: ";
					cin >> num2;
					cout << endl << "The answer is: ";
					cout << Calc::division(num1, num2);
					out << endl << Calc::division(num1, num2);
					break;
				}
				default: {
					cout << "Are you sure you want to exit the program? if you want to exit the program re-enter -1\n if you want to continue enter 0" << endl;
					cout << "Enter your choice: ";
					cin >> choice;
					if (choice == -1) {
						cout << "GOODBYE! :)";
						out << endl << "\nGOODBYE! :)";
						exit(0);
					}
					else
						break;
				}
			}
		}
		system("pause");
	} while (choice != -1);
	cout << "GOODBYE!  :)";
	out << endl << "\nGOODBYE!  :)";
	out.close();
}