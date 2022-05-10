#include<iostream>
#include<string>
#include"Conference.h"
using namespace std;
int conference::numOfConf = 0;
conference::conference(string t, int s):confId(numOfConf)
{
	numOfConf++;
	noOfSeats = s;
	confType = t;
}

conference::conference(conference& c):confId(numOfConf)
{
	numOfConf++;
	cout << endl << "Copy Constructor is called";
	noOfSeats = c.noOfSeats;
	confType = c.confType;
}

const int conference::getCId()
{
	return confId;
}

const string conference::getcType()
{
	return confType;
}

const int conference::getNoS()
{
	return noOfSeats;
}
void conference::setCType(string T)
{
	confType = T;
}

void conference::setCNoS(int s)
{
	noOfSeats = s;
}

const int conference::getnumOfConf()
{
	return numOfConf;
}

const void conference::print()
{
	cout << endl << "The details of Conference: " << endl;
	cout << "Conference ID: " << this->getCId() << endl << "Conference Type: " << this->getcType();
	cout << endl << "Number of seats: " << this->getNoS() << endl << "Number of Conference: " << this->getnumOfConf();

}
conference::~conference()
{
	numOfConf--;
}