#include "Product.h"

Product::Product()
{
	count++;
	id = count;
}

Product::Product(string name, string discription, float starting_price, int discount, int general_discount0, float residual_value)
{
	this->name = name;
	this->discription = discription;
	this->starting_price = starting_price;
	this->discount = discount;
	//this->general_discount = general_discount;
	this->general_discount0 = general_discount0;
	this->residual_value = residual_value;
	this->id = id;	
	count++;
	id = count;
}

void Product::setName(string name)
{
	this->name = name;
}

void Product::setNameFromKey()
{
	cout << "Name: " ;
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
	//cout << "Name: "<<this->name << endl;
}

string Product::getName() const
{
	return name;
}

void Product::setDiscription()
{
	cout << "Choose a discription:" << endl;
	string discriptions[] = { "Bakery products", "Milk products", "Vegetables", "Fruit" , "Spice and seasonings" };
	int index = MenuDiscriotion(discriptions);
	this->discription = discriptions[index];
}

void Product::setStarting_price()
{
	this->starting_price = starting_price;
}

void Product::setStarting_priceFromKey()
{
	cout << "Price: ";
	cin >> this->starting_price;
}

void Product::setDiscountFromKey()
{
	cout << "Discount: ";
	cin >> this->discount;
}

//static void Product::setGeneral_discount0()
//{
//	/*cout << "General discount: ";
//	cin >> general_discount0;*/
//}

void Product::setResidual_value()
{
	this->residual_value = (this->starting_price - (this->starting_price * this->discount / 100))-
		(this->starting_price-(this->starting_price * this->discount/100)) * this->general_discount0/100;
}








void SetColor(int col)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
}
void SetPos(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void Size_Console(int x, int y)
{
	HANDLE out_handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD crd = { x, y };
	SMALL_RECT src = { 0, 0, crd.X , crd.Y };
	SetConsoleWindowInfo(out_handle, true, &src);
	SetConsoleScreenBufferSize(out_handle, crd);
}
int Menu(string menu_items[], int SIZE)
{
	int key = 0;
	int code;
	do {
		//system("cls");
		key = (key + SIZE) % SIZE;
		for (int i = 0; i < SIZE; i++)
		{
			SetPos(0, 3 + i);
			if (key == i)
			{

				cout << " "; SetColor(6); cout << menu_items[i]; SetColor(3); cout << " " << endl; SetColor(15);
			}
			else
			{
				cout << " "; cout << menu_items[i]; cout << " " << endl;
			}

		}
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}

int MenuDiscriotion(string discriptions[])
{
	Size_Console(65, 45);
	string menu[] = { "Bakery products", "Milk products", "Vegetables", "Fruit" , "Spice and seasonings" };
	int index = Menu(menu, size(menu));
	return index;
}


void Product::printProduct()
{
	cout << "Name:             " << name << endl;
	cout << "Discription:      " << discription << endl;
	cout << "ID:               " << id << endl;
	cout << "Price:            " << starting_price << endl;
	cout << "Discount:         " << discount << "%"<<endl;
	cout << "General discount: " << general_discount0 << "%" << endl;
	cout << "Residual value:   " << residual_value << endl;
}




//int Product::count = 0;







