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


public:
	Product();		
	Product(string name);
	void setNameFromKey();
	void printProduct();
	




};