#include "Product.h"
int Product::count = 0;
int Product::general_discount0 = 0;

int main()
{
	srand(time(0));	
	int size;
	cout << "Enter amount of products ";
	cin >> size;
	system("CLS");
	int gd;
	cout << "Enter general discount for all products: ";
	cin >> gd;
	system("CLS");
	
	Product* newProduct = new Product[size];
	for (size_t i = 0; i < size; i++)
	{
		newProduct[i].setNameRandomly();
		cout << "Product " << i + 1 << ": "<< newProduct[i].getName()<<endl;		
		newProduct[i].setDiscription();
		newProduct[i].setStarting_priceFromKey();
		newProduct[i].setDiscountFromKey();
		newProduct[i].setGeneral_discount0(gd);
		newProduct[i].setResidual_value();
		system("CLS");
	}

	system("CLS");
	for (size_t i = 0; i < size; i++)
	{
		newProduct[i].printProduct();
		cout << "____________________________________" << endl;
	}
		
	delete[]newProduct;
}