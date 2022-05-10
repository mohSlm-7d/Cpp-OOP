#include<iostream>
#include<string>
#include "Car.h"
using namespace std;
int car::numOfCars = 0;
car::car(car& c) :carId(numOfCars)
{
	carType = c.carType;
	carSpeed = c.carSpeed;
}

car::car(int i, string t, int s) :carId(numOfCars)
{
	carType = t;
	carSpeed = s;
}
const int car::getCId()
{
	return carId;
}
const int car::getSpeed()
{
	return carSpeed;
}

void car::setCSpeed(int s)
{
	carSpeed = s;
}

/*const void car::setCId(int i)
{
	//carId = i;
}*/

void car::setCType(string T)
{
	carType = T;
}
int car::getnumOfCars()
{
	return numOfCars;
}
void car::print()
{
	cout << endl << "Car ID: " << getCId();
	cout << endl << "Car Type: " << getcType() << endl << "Car Speed: " << getSpeed();
}
car::~car()
{
	cout << endl << "Copy Constructor is used";
	numOfCars--;
}