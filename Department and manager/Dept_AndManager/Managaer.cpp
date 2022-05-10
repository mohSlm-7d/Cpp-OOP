#include"Manager.h"
#include<iostream>
#include<string>
using namespace std;

Manager::Manager() {

}
Manager::Manager(string n, string e, char g) {
	name = n;
	email = e;
	gender = g;
}
string Manager::getname() {
	return name;
}
string Manager::getemail() {
	return email;
}
char Manager::getgender() {
	return gender;
}