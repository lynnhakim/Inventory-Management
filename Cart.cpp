#pragma once
#include <vector>
#include "ItemToPurchase.h"
class Cart
{
public:
	void addItem(ItemToPurchase& item);
	void getItem(string name);
	void removeItem(string name);
	void findItem(string name);
	void updateItem(string name, int price, int quantity, int type);
	void printCart();
	void toFile();
	void fromFile();



private:
	vector <ItemToPurchase> items;
};

