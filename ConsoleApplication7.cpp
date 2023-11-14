#include <iostream>
#include "Cart.h"
#include "ItemToPurchase.h"

using namespace std;

int main() {
    Cart cart;
    cout << "-----------------------------------------------------------" << endl;
    cout << "---------------Inventory Management System ----------------" << endl;
    cout << "-----------------------------------------------------------" << endl;

    char choice;
    do {
        cout << "Please choose an option:" << endl;
        cout << "1. Add a product" << endl;
        cout << "2. Remove a product" << endl;
        cout << "3. Find a product" << endl;
        cout << "4. Update a product" << endl;
        cout << "5. View all products" << endl;
        cout << "6. Save inventory to file" << endl;
        cout << "7. Load Inventory from file" << endl;
        cout << "Q. Quit" << endl;
        cin >> choice;

        switch (choice) {
        case '1': {
            string name;
            double price;
            int quantity;
            int type;

            cout << "Enter product name: ";
            cin >> name;
            cout << "Enter product price: $ ";
            cin >> price;
            cout << "Enter product quantity: ";
            cin >> quantity;
            cout << "Enter product type: ";
            cin >> type;


            ItemToPurchase item(name, price, quantity, type);
            cart.addItem(item);
            break;
        }

        case '2': {
            string name;
            cout << "Enter product name: ";
            cin >> name;
            cart.removeItem(name);
            break;
        }

        case '3': {
            string name;
            cout << "Enter product name: ";
            cin >> name;
            ItemToPurchase* item = cart.findItem(name);
            if (item) {
                cout << "Name: " << item->GetName() << endl;
                cout << "Category: " << item->getItemType() << endl;
                cout << "Price: $ " << item->GetPrice() << endl;
                cout << "Quantity: " << item->GetQuantity() << endl;
                cout << "-----------------------------------------------------------" << endl;
            }
            else {
                cout << "Product not found." << endl;
                cout << "-----------------------------------------------------------" << endl;
            }
            break;
        }

        case '4': {
            string name;
            int price;
            int quantity;
            int type;

            cout << "Enter new product name: ";
            cin >> name;
            cout << "Enter new product price: $ ";
            cin >> price;
            cout << "Enter new product quantity: ";
            cin >> quantity;
            cout << "Enter new product type: ";
            cin >> type;
            cart.updateItem(name, price, quantity, type);
            cout << "Product updated" << endl;
            cout << "-----------------------------------------------------------" << endl;
            break;
        }

        case '5': {
            cart.printCart();
            break;
        }
        case '6': {
            cart.toFile(); //filename to insert
            cout << "Inventory saved to file." << endl;
            cout << "-----------------------------------------------------------" << endl;
            break;
        }
        case '7': {
            cart.fromFile(); //filename to insert
            cout << "Inventory loaded from file." << endl;
            cout << "-----------------------------------------------------------" << endl;
            break;
        }
        case 'q':
        case 'Q':
            cout << "Finished shopping" << endl;
            cout << "-----------------------------------------------------------" << endl;
            return 0;

        default:
            cout << "Invalid Choice. Please Try again" << endl;
            cout << "-----------------------------------------------------------" << endl;
            break;
        }
    } while (true);

    return 0;
}