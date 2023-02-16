#pragma once
#include "Product.h"
#include<string>
class Book : public Product
{
private:
	string _authorName,_publisherName,_bookName;


public:
	Book();
	Book(int, int, float, string, string, string);//first three parameters are from the base class
	~Book();
	
	string getAuthorName();
	string getPublisherName();
	string getBookName();

	void setAuthorName(string);
	void setPublisherName(string);
	void setBookName(string);

	void displayProductList();
	void loadProducList();

	
};

