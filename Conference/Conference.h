#pragma once
using namespace std;
class conference
{
private:
	const int confId;
	string confType;
	int noOfSeats;
	static int numOfConf;
public:
	conference(string t, int s);
	conference(conference& c);
	const int getCId();
	const string getcType();
	const int getNoS();
	//void setCId(int i);  It cannot work becuase confId is const and we cannot assign a new value to it(confId).
	void setCType(string T);
	void setCNoS(int s);
	const static int getnumOfConf();
	const void print();
	~conference();
};