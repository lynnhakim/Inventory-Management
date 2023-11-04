#include <iostream>
using namespace std;

#include "ItemToPurchase.h"
using namespace std;

int main() {

	//ask how many items 
	// 3 items


	string name1, name2;
	int price1, price2, quantity1, quantity2;
	ItemToPurchase item1;
	cout << "Item 1" << endl;
	cout << "Enter the item name: " << endl;
	cin >> name1;
	cout << "Enter the item price: " << endl;
	cin >> price1;
	cout << "Enter the item quantity: " << endl;
	cin >> quantity1;
	

	cin.ignore();
	ItemToPurchase item2;
	cout << "Item 2" << endl;
	cout << "Enter the item name: " << endl;
	cin >> name2;
	cout << "Enter the item price: " << endl;
	cin >> price2;
	cout << "Enter the item quantity:" << endl;
	cin >> quantity2;

	cout << "TOTAL COST " << endl;
	cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = &" << item1.getTotal()<<endl;
	cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = &" << item2.getTotal()<<endl;
	cout << endl;
	int totalPrice = item1 + item2;

	cout << "Total: $" << totalPrice;



	return 0;
}