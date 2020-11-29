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
	//cout << "Enter general_discount";
	//Product newProduct;
	Product* newProduct = new Product[size];
	for (size_t i = 0; i < size; i++)
	{
		newProduct[i].setNameRandomly();
		cout << "Product " << i + 1 << ": "<< newProduct[i].getName()<<endl;		
		newProduct[i].setDiscription();
		newProduct[i].setStarting_priceFromKey();
		newProduct[i].setDiscountFromKey();
		newProduct[i].setGeneral_discount0();
		newProduct[i].setResidual_value();
		system("CLS");
	}

	//newProduct.setNameFromKey();
	/*newProduct.setNameRandomly();
	newProduct.setDiscription();
	newProduct.setStarting_priceFromKey();
	newProduct.setDiscountFromKey();
	newProduct.setGeneral_discount();
	newProduct.setResidual_value();*/
	system("CLS");
	for (size_t i = 0; i < size; i++)
	{
		newProduct[i].printProduct();
		cout << "____________________________________" << endl;
	}
	//newProduct[0].printProduct();

	
	delete[]newProduct;
}