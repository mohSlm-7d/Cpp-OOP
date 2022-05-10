#include<iostream>
#include"Book.h"	
using namespace std;

Book::Book(string t, Author a) :price(0), qty(0),title("")
{
	title = t;
	author = a;
}

Book::Book(const Book& B, string t)
{
	title = t;
	this->author = B.author;
	this->price = B.price;
	this->qty = B.qty;
}

string Book::getName()
{
	return title;
}

Author Book::getAuthor()
{
	return author;
}

double Book::getPrice()
{
	return price;
}

int Book::getQty()
{
	return qty;
}

void Book::setPrice(double p)
{
	this->price = p;
}

void Book::setQty(int q)
{
	this->qty = q;
}

int Book::updateQty(int Pq)
{
	if (Pq <= qty)
		qty -= Pq;
	
	else
	{
		cout << endl << "Quantity Exceeded.";
	}
	return qty;
}
