#include "Inventory.h"

Inventory::Inventory() {
	Item* apple = new Item("apple", 2, produce);
	Item* grape = new Item("grape", 3, produce);
	Item* tomato = new Item("tomato", 3, produce);
	Item* lettuce = new Item("lettuce", 4, grocery);
	Item* milk = new Item("milk", 5, grocery);
	Item* ramen = new Item("ramen", 1, grocery);
	Item* toothbrush = new Item("toothbrush", 3, taxable);
	Item* soap = new Item("soap", 4, taxable);
	Item* papertowel = new Item("paper towel", 7, taxable);
	inventory.push_back(apple);
	inventory.push_back(grape);
	inventory.push_back(tomato);
	inventory.push_back(lettuce);
	inventory.push_back(milk);
	inventory.push_back(ramen);
	inventory.push_back(toothbrush);
	inventory.push_back(soap);
	inventory.push_back(papertowel);

	Stock();
}

void Inventory::Stock() {
	for (int i = 0; i < quantity.size(); ++i) {
		quantity.at(i) = 3;
	}
}
Item Inventory::GetItem(int index) const{
	return *(inventory.at(index));
}
int Inventory::GetSize() const{
	return inventory.size();
}
int Inventory::GetQuantity(string name) const{
	int quantity = 0;
	for (int i = 0; i < inventory.size(); ++i) {
		if (inventory.at(i)->GetName() == name) {
			quantity++;
		}
	}
	return quantity;
}
void Inventory::ChangeItem(string name, string newName, int price, TYPE type) {
	for (int i = 0; i < inventory.size(); ++i) {
		if (inventory.at(i)->GetName() == name) {
			inventory.at(i)->SetName(newName);
			inventory.at(i)->SetPrice(price);
			inventory.at(i)->SetType(type);
		}
	}
}
void Inventory::AddItem(string name, int price, TYPE type, int quantity) {
	for (unsigned int i = 0; i < quantity; ++i) {
		Item* newItem = new Item(name, price, type);
		inventory.push_back(newItem);
	}
}

Inventory::~Inventory() {
	for (int i = 0; i < inventory.size(); ++i) {
		delete inventory.at(i);
	}
	inventory.clear();
	quantity.clear();
	cout << "An inventory object has been deleted from memory." << endl;
}