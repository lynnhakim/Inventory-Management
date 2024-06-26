/*
 * FIXME: might combine with DataBase? not sure.
 */

#pragma once
#include <vector>
#include "Item.h"
using namespace std;
class Inventory
{
	friend ostream& operator<<(ostream& os, Inventory inv) {
		for (unsigned int i = 0; i < inv.inventory.size(); ++i) {
			os << inv.inventory.at(i)->GetName() << " $" << inv.inventory.at(i)->GetPrice() << ". Stock: ";
			os << inv.GetQuantity(inv.inventory.at(i)->GetName());
		}
		return os;
	}
public:
	Inventory();
	~Inventory();
	Item GetItem(int) const;
	void ChangeItem(string, string, int, TYPE);
	void AddItem(string, int, TYPE, int);
	int GetQuantity(string);
	int GetSize();

private:
	void Stock(); 
	vector<Item*> inventory;
	vector<int> quantity;
};

