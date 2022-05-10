#pragma once
using namespace std;
class car
{
private:
	const int carId;
	string carType;
	int carSpeed;
	static int numOfCars;
public:
	car(car& c);
	car(int i, string t, int s);
	//const int getCId();
	const string getcType();
	const int getSpeed();
	void setCType(string T);
	const void setCId(int i);
	void setCSpeed(int s);
	static int getnumOfCars();
	void print();
	~car();
};
