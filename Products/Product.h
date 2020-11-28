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
	string discriotion;


public:
	Product();		
	Product(string name);
	void setNameFromKey();
	void setNameRandomly();
	void setDiscription();
	void printProduct();
	




};
void SetColor(int col);
void SetPos(int x, int y);
void Size_Console(int x, int y);
int Menu(string menu_items[], int SIZE);
int MenuDiscriotion(string discriptions[]);