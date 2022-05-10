#include<iostream>
#include<string>
using namespace std;
class Account
{
	int id;
	string name;
	double balance;
public:
	void set_id(int id);
	void set_name(string name);
	void set_balance(double balance);
	int getId();
	string getname();
	double getbalance();
	double credit(double amount);
	double debit(double amount);
	void transferTo(Account& account, double amount);
};
void main()
{
	Account account1;
	Account account2;
	account1.set_id(1234);
	account1.set_name("Ahmad");
	account1.set_balance(1520);
	cout << "Please enter the id, name, and balance:" << endl;
	int id;
	string name;
	double balance;
	cin >> id;
	cin >> name;
	cin >> balance;
	account2.set_id(id);
	account2.set_name(name);
	account2.set_balance(balance);
	cout << "************************************" << endl;
	cout << "Customer " << account1.getId() << ", " << account1.getname() << " has " << account1.getbalance() << "$" << endl;
	cout << "Customer " << account2.getId() << ", " << account2.getname() << " has " << account2.getbalance() << "$" << endl;
	cout << "************************************" << endl;
	cout << "Please enter the credit amount" << endl;
	double amount;
	cin >> amount;
	cout << "Your balance is " << account1.credit(amount) << "$" << endl;
	cout << "************************************" << endl;
	account2.debit(750);
	account1.debit(1750);
	cout << "Customer " << account1.getId() << ", " << account1.getname() << " has " << account1.getbalance() << "$" << endl;
	cout << "Customer " << account2.getId() << ", " << account2.getname() << " has " << account2.getbalance() << "$" << endl;
	cout << "************************************" << endl;
	cout << "Please specify the amount that you want to transfer" << endl;
	cin >> amount;
	account1.transferTo(account2, amount);
	cout << "************************************" << endl;
	cout << "Customer " << account1.getId() << ", " << account1.getname() << " has " << account1.getbalance() << "$" << endl;
	cout << "Customer " << account2.getId() << ", " << account2.getname() << " has " << account2.getbalance() << "$" << endl;
}
void Account::set_id(int id)
{
	Account::id = id;
}
void Account::set_name(string name)
{
	Account::name = name;
}
void Account::set_balance(double balance)
{
	Account::balance = balance;
}
int Account::getId()
{
	return id;
}
string Account::getname()
{
	return name;
}
double Account::getbalance()
{
	return balance;
}
double Account::debit(double amount)
{
	if (balance >= amount)
		balance -= amount;
	else
		cout << "Amount Exceeded!!!" << endl;
	return balance;
}
double Account::credit(double amount)
{
	balance += amount;
	return balance;
}
void Account::transferTo(Account& account,double amount)
{
	/*If the call was {account2.transferTo(account1,amount)}
	if (account.balance >= amount)
	{
		account.balance -= amount;
		balance += amount;
	}*/
	if (balance >= amount)
	{
		balance -= amount;
		account.balance += amount;
	}
	else
		cout << "Amount Exceeded!!!" << endl;
}