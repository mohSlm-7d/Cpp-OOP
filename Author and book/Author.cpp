#include<iostream>
#include"Author.h"
using namespace std;

Author::Author()
{//Author default constructor does nothing.
}

Author::Author(string n, string e, char g)
{
	name = n;
	email = e;
	gender = g;
}

string Author::getName()
{
	return name;
}

string Author::getEmail()
{
	return email;
}

char Author::getGender()
{
	return gender;
}
