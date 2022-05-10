#include<iostream>
#include<string>
#include"Author.h"
#include"Book.h"
using namespace std;
void main() 
{
	Author Author1("Paul Barry", "paul. barry@gmail.com", 'm');
	Book Book1("Head First Python", Author1);
	Book1.setPrice(39.99);
	Book1.setQty(10);
	Book Book2(Book1, "Head First Python: A Brain-Friendly Guide");
	Book2.setPrice(29.99);
	Book2.setQty(7);
	cout << endl << "Which book you would like to buy?" << endl << "1) " << Book1.getName() << " for " << Book1.getAuthor().getName();
	cout << endl << "2) " << Book2.getName() << " for " << Book2.getAuthor().getName() << endl << "3) I would not.";
	int choice;
	char confirm;
	int numOfBooks;
	cout << endl << "************************************" << endl;
	cin >> choice;
	switch (choice) {
		case 1:
		{
			cout << "The price of " << Book1.getName() << " is " << Book1.getPrice() << ", press Y to confirm the order or N to cancel it" << endl;
			cin >> confirm;
			if (confirm == 'Y')
			{
				cout << "************************************ How many books you would like to buy?" << endl;
				cin >> numOfBooks;
				cout << "************************************" << endl;
				Book1.updateQty(numOfBooks);
				cout << "Done, " << Book1.getQty() << " books still available." << endl << "Thanks for visiting our bookshop";
				break;
			}
			else
			{
				cout << endl << "Thanks for visiting our bookshop";
				break;
			}
		}
		case 2:
		{
			cout << "The price of \"" << Book2.getName() << "\" is " << Book2.getPrice() << "$, press Y to confirm the order or N to cancel it" << endl;
			cin >> confirm;
			if (confirm == 'Y')
			{
				cout << "************************************ How many books you would like to buy?" << endl;
				cin >> numOfBooks;
				cout << "************************************" << endl;
				Book2.updateQty(numOfBooks);
				cout << "Done, " << Book2.getQty() << " books still available." << endl << "Thanks for visiting our bookshop";
				break;
			}
			else
			{
				cout << endl << "Thanks for visiting our bookshop";
				break;
			}
		}
		case 3:
		{
			cout << endl << "Thanks for visiting our bookshop";
			break; 
		}
	}
}

