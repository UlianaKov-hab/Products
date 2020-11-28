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

void Product::setNameRandomly()
{
	string name[20]{ "Bread", "Milk", "Yogurt", "Sour cream", "Cake", "Strudel", "Potato", "Carrot", "Onion", "Garlic",
							"Oregano", "Black pepper", "Cilantro", "Apple", "Pear", "Grapes", "Melon", "Pizza",
							"Cabbage", "Cottage cheese" };
	int i;
	i = rand() % 20;
	this->name = name[i];
}

void Product::printProduct()
{
	cout << "Name: " << name << endl;
}
