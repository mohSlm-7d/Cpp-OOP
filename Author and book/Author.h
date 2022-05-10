#pragma once
using namespace std;
class Author 
{
private:
	string name;
	string email;
	char gender;
public:
	Author();
	Author(string n, string e, char g);
	string getName();
	string getEmail();
	char getGender();
};