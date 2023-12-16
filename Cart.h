#pragma once
#include <vector>
#include <iostream>
#include "Item.h"
#include "Inventory.h"
class Cart
{
	friend ostream& operator<<(ostream& os, const Cart& c) {
		for (unsigned int i = 0; i < c.items.size(); ++i) {
			os << c.items.at(i).GetName() << " $" << c.items.at(i).GetPrice() << endl;
		}
		return os;
	}
public: 
	Cart();
	void AddItem(string, int);
	void RemoveItem(string);
	bool InCart(string);
	int GetQuantity(string) const;
	void PrintItem(string) const;
	int getTotal();


private:
	vector <Item> items;
	Inventory inv;
	int total;
};

