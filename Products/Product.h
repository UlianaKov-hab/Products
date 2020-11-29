#pragma once
#include<iostream>
#include<string>
#include<time.h>
#include <conio.h>
#include<fstream>
#include <windows.h>
using namespace std;
class Product
{
private:
	string name;
	string discription;
	float starting_price;
	int discount;	
	//int general_discount;
	float residual_value;
	int id;


public:
	static int general_discount0; 
	static int count;
	Product();		
	Product(string name, string discription, float starting_price, int discount, int general_discount0, float residual_value);
	void setName(string name);
	void setNameFromKey();
	void setNameRandomly();
	string getName() const;
	void setDiscription();
	void setStarting_price();
	void setStarting_priceFromKey();
	void setDiscountFromKey();
	static void setGeneral_discount0()
	{
		cout << "General discount: ";
		cin >> general_discount0;
	}
	void setResidual_value();	
	void printProduct();

};

void SetColor(int col);
void SetPos(int x, int y);
void Size_Console(int x, int y);
int Menu(string menu_items[], int SIZE);
int MenuDiscriotion(string discriptions[]);