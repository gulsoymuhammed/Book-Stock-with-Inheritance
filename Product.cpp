#include "Product.h"
#include <iostream>
#include<string>

using namespace std;

Product::Product()
{
	cout << "Default Constructor --Product Class" << endl;
}

Product::Product(int prId, int prStockNumber, float prPrice)
{
	_id = prId;
	_stockNumber = prStockNumber;
	_price = prPrice;
}

Product::~Product()
{
	cout << "Destructor --Product Class" << endl;
}

int Product::getId()
{
	return _id;
}

int Product::getStockNumber()
{
	return _stockNumber;
}

float Product::getPrice()
{
	return _price;
}

void Product::setId(int prId)
{
	_id = prId;
}

void Product::setStockNumber(int prStockNumber)
{
	_stockNumber = prStockNumber;
}

void Product::setPrice(float prPrice)
{
	_price = prPrice;
}

void Product::loadProductList()
{
	cout << "\n Enter product id:";
	cin >> _id;
	cout << " Enter product price:";
	cin >> _price;
	cout << " Enter product stock number:";
	cin >> _stockNumber;
	cout << "\n---------------------------------\n";
}

void Product::displayProductList()
{
	cout << " product id:" << _id;
	cout << " product price:" << _price;
	cout << " product stock number:" << _stockNumber;

}
