#include "Item.h"
using namespace std;

Item::Item(string name, int price, TYPE type) {
	itemName = name;
	itemPrice = price;
	this->type = type;
}

void Item::SetName(string name) {
	itemName = name;
}
string Item::GetName() {
	return itemName;
}

void Item::SetPrice(int price) {
	itemPrice = price;
}
int Item::GetPrice() {
	return itemPrice;
}
void Item::SetType(TYPE type) {
	this->type = type;
}
TYPE  Item::GetType() {
	return type;
}