#pragma once
#include"Author.h"
using namespace std;
class Book
{
private:
	string title;
	Author author;
	double price;
	int qty;
public:
	Book(string t, Author a);
	Book(const Book& B, string t);
	string getName();
	Author getAuthor();
	double getPrice();
	int getQty();
	void setPrice(double p);
	void setQty(int q);
	int updateQty(int Pq);
};
