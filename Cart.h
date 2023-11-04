#pragma once
#include <vector>
#include "ItemToPurchase.h"
class Cart
{
public: 
	void addItem(ItemToPurchase& item);
	void printCart(vector <ItemToPurchase> items);
	void setReceipt(vector <ItemToPurchase> items);
	vector<ItemToPurchase> getReceipt();


private:
	vector <ItemToPurchase> items;
};

