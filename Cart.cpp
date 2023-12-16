#pragma once
#include "Cart.h"

Cart::Cart() {
	total = 0;
}

void Cart::AddItem(string name, int quantity) {
	for (int i = 0; i < inv.GetSize(); ++i) {
		if (inv.GetItem(i).GetName() == name) {
			for (int j = 0; j < quantity; ++j) {
				items.push_back(inv.GetItem(i));
				total += inv.GetItem(i).GetPrice() * quantity;
			}
			return;
		}
	}
	std::cout << name << " not supplied." << std::endl; //FIXME: add try/catch error checking?
}
void Cart::RemoveItem(string name) {
	for (int i = 0; i < items.size(); ++i) {
		if (items.at(i).GetName() == name) {
			items.erase(items.begin() + i);
			i--;
			return;
		}
	}
}
bool Cart::InCart(string name) {
	for (int i = 0; i < items.size(); ++i) {
		if (items.at(i).GetName() == name) {
			return true;
		}
	}
	return false;
}
int Cart::GetQuantity(string name) const{
	int quantity = 0;
	for (int i = 0; i < items.size(); ++i) {
		if (items.at(i).GetName() == name) {
			quantity++;
		}
	}
	return quantity;
}
void Cart::PrintItem(string name) const{
	for (int i = 0; i < items.size(); ++i) {
		if (items.at(i).GetName() == name) {
			cout << items.at(i);
			return;
		}
	}
}
int Cart::getTotal() {
	return total;
}

//void Cart::toFile();
//void Cart::fromFile();


