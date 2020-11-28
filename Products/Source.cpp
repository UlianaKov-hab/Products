#include "Product.h"

int main()
{
	srand(time(0));
	Product newProduct;

	//newProduct.setNameFromKey();
	newProduct.setNameRandomly();
	newProduct.setDiscription();
	newProduct.setStarting_priceFromKey();
	newProduct.setDiscountFromKey();
	newProduct.setGeneral_discount();
	newProduct.setResidual_value();
	system("CLS");
	newProduct.printProduct();

	
	
}