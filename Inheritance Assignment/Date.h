#pragma once
class Date {
private :
	int day;
	int month;
	int year;
public :
	void set_day(int day);
	void set_month(int month);
	void set_year(int year);
	int get_day();
	int get_month();
	int get_year();
	friend bool checkDate(Date& D);
};