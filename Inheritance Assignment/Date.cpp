#include "Date.h"
using namespace std;
void Date::set_day(int day){
	this->day = day;
}

void Date::set_month(int month){
	this->month = month;
}

void Date::set_year(int year){
	this->year = year;
}

int Date::get_day(){
	return day;
}

int Date::get_month(){
	return month;
}

int Date::get_year(){
	return year;
}
bool checkDate(Date& D) {
	if (D.year > 2021 || D.year < 1900){
		return false;
	}
	switch (D.month) {
	case 1: {
		if (D.day > 31 || D.day <= 0)
			return false;
	}
	case 2: {
		if (D.year % 4 == 0) {
			if (D.day > 29 || D.day <= 0)
				return false;
		}
		else {
			if (D.day > 28 || D.day <= 0)
				return false;
		}
	}
	case 3: {
		if (D.day > 31 || D.day <= 0)
			return false;
	}
	case 4: {
		if (D.day > 30 || D.day <= 0)
			return false;
	}
	case 5: {
		if (D.day > 31 || D.day <= 0)
			return false;
	}
	case 6: {
		if (D.day > 30 || D.day <= 0)
			return false;
	}
	case 7: {
		if (D.day > 31 || D.day <= 0)
			return false;
	}
	case 8: {
		if (D.day > 31 || D.day <= 0)
			return false;
	}
	case 9: {
		if (D.day > 30 || D.day <= 0)
			return false;
	}
	case 10: {
		if (D.day > 31 || D.day <= 0)
			return false;
	}
	case 11: {
		if (D.day > 30 || D.day <= 0)
			return false;
	}
	case 12: {
		if (D.day > 31 || D.day <= 0)
			return false;
	}
	default:
		return false;
	}
}