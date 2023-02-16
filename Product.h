#pragma once
#include<iostream>
using namespace std;
class Product
{
protected:
	int _id, _stockNumber;
	float _price;
public:
	Product();//constructor
	Product(int, int, float);//id,stockNumber,price
	~Product();//destructor

	int getId();
	int getStockNumber();
	float getPrice();

	void setId(int);
	void setStockNumber(int);
	void setPrice(float);

	void loadProductList();
	void displayProductList();







};

