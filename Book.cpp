#include "Book.h"
#include<iostream>

Book::Book()
{
	cout << "Default Constructor --Book Class" << endl;

}

Book::Book(int prId, int prStockNumber, float prPrice, string prAuthorName, string prPublisherName, string prBookName):Product(prId,prStockNumber,prPrice)
{
	_authorName = prAuthorName;
	_publisherName = prPublisherName;
	_bookName = prBookName;
}

Book::~Book()
{
	cout << "Destructor--Book Class" << endl;
}
string Book::getAuthorName()
{
	return _authorName;
}

string Book::getPublisherName()
{
	return _publisherName;
}

string Book::getBookName()
{
	return _bookName;
}

void Book::setAuthorName(string prAuthorName)
{
	_authorName = prAuthorName;
}

void Book::setPublisherName(string prPublisherName)
{
	_publisherName = prPublisherName;
}

void Book::setBookName(string prBookName)
{
	_bookName = prBookName;
}

void Book::displayProductList()
{
	cout << "\n product id:" << _id;
	cout << "\n product price:" << _price;
	cout << "\n product stock number:" << _stockNumber;
	cout << "\n book name:" << _bookName;
	cout << "\n book author name:" << _authorName;
	cout << "\n book publisher name:" << _publisherName;
	cout << "\n------------------------------------------------\n";
}

void Book::loadProducList()
{
	cout << "\n Enter product id:";
	cin >> _id;
	cout << " Enter product price:";
	cin >> _price;
	cout << " Enter product stock number:";
	cin >> _stockNumber;
	cout << " Enter book name:";
	cin >> _bookName;
	cout << " Enter book author name:";
	cin >> _authorName;
	cout << " Enter book publisher name:";
	cin >> _publisherName;
	cout << "\n---------------------------------\n";
}
