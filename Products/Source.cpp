#include "Product.h"

int main()
{
	srand(time(0));
	Product newProduct;

	//newProduct.setNameFromKey();
	newProduct.setNameRandomly();
	newProduct.setDiscription();
	newProduct.setStarting_priceFromKey();
	system("CLS");
	newProduct.printProduct();
	
	
}