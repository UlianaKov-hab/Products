#include "Product.h"

int main()
{
	srand(time(0));
	int size;
	cout << "Enter amount of products ";
	cin >> size;
	//Product newProduct;
	Product* newProduct = new Product[size];
	for (size_t i = 0; i < size; i++)
	{
		newProduct[i].setNameRandomly();
		newProduct[i].setDiscription();
		newProduct[i].setStarting_priceFromKey();
		newProduct[i].setDiscountFromKey();
		newProduct[i].setGeneral_discount();
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