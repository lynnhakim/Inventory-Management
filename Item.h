#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>
#include "constants.h"
using namespace std;

class Item {
	friend ostream& operator<<(ostream& os, Item ip) {
		os << "Name: " << ip.GetName() << endl;
		os << "Category: " << ip.GetType() << endl;
		os << "Price: $ " << ip.GetPrice() << endl;
		return os;
	}
public:
	Item(string name, int price, TYPE type);
	void SetName(string);
	string GetName() const;

	void SetPrice(int);
	int GetPrice() const;

	void SetType(TYPE);
	TYPE  GetType() const;
private:
	string itemName;
	int itemPrice;
	TYPE type;
};


#endif