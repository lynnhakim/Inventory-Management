#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase() {
	itemName = "none";
	itemPrice = 0;
	itemQuantity = 0;
}
void ItemToPurchase::SetName(string name) {
	itemName = name;
}
string ItemToPurchase::GetName() {
	return itemName;
}

void ItemToPurchase::SetPrice(int price) {
	itemPrice = price;
}
int ItemToPurchase::GetPrice() {
	return itemPrice;
}

void ItemToPurchase::SetQuantity(int quantity) {
	itemQuantity = quantity;
}
int ItemToPurchase::GetQuantity() {
	return itemQuantity;
}

void ItemToPurchase::setTotal(int price, int quantity) {
	total = price * quantity;
}
int ItemToPurchase::getTotal() {
	return total;
}



int ItemToPurchase::operator+(ItemToPurchase& item2) {
	int tempTot;
	tempTot = this->getTotal() + item2.getTotal();
	return tempTot;
}
