#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
public:
	ItemToPurchase();
	void SetName(string name);
	string GetName();

	void SetPrice(int price);
	int GetPrice();

	void SetQuantity(int quantity);
	int GetQuantity();

	void setTotal(int price,int quantity);
	int getTotal();

	void setitemType(int type);
	int  getItemType();
	int operator+(ItemToPurchase& item2);
private:
	string itemName;
	int itemPrice;
	int itemQuantity;
	int total;
	int type;

};


#endif