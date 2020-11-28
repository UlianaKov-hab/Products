#include "Product.h"

Product::Product()
{
}

Product::Product(string name) 
{
	this->name = name;
}

void Product::setNameFromKey()
{
	cout << "Name: " << endl;
	getline(cin, name);

}

void Product::printProduct()
{
	cout << "Name: " << name << endl;
}
