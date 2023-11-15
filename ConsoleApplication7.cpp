#include <iostream>
#include "Cart.h"
#include "Item.h"
#include "constants.h"

using namespace std;

int main() {
    Inventory inventory;
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
        cout << "5. View cart" << endl;
        cout << "6. Browse available items" << endl;
        cout << "7. Save inventory to file" << endl;        //FIXME: cart destructor should save inventory to file
        cout << "8. Load Inventory from file" << endl;      //FIXME: inventory constructor should load inventory from file
        cout << "Q. Quit" << endl;
        cin >> choice;

        switch (choice) {
        case '1': {
            string name;
            int quantity;

            cout << "Enter product name: ";
            cin >> name;
            cout << "Enter product quantity: ";
            cin >> quantity;

            cart.AddItem(name, quantity);
            break;
        }

        case '2': {
            string name;
            cout << "Enter product name: ";
            cin >> name;
            cart.RemoveItem(name);
            break;
        }

        case '3': { 
            string name;
            cout << "Enter product name: ";
            cin >> name;
            if (cart.InCart(name)) {
                cart.PrintItem(name);
                cout << "Quantity: " << cart.GetQuantity(name) << endl;
                cout << "-----------------------------------------------------------" << endl;
            }
            else {
                cout << "Product not found." << endl;
                cout << "-----------------------------------------------------------" << endl;
            }
            break;
        }

        case '4': { //FIXME: restrict access?
            string name;
            int price;
            unsigned int quantity;
            int type;

            cout << "Enter new product name: ";
            cin >> name;
            cout << "Enter new product price: $ ";
            cin >> price;
            cout << "Enter new product quantity: ";
            cin >> quantity;
            cout << "Enter new product type: "; //0=grocery, 1=produce, 2=taxable
            cin >> type;

            inventory.AddItem(name, price, TYPE(type), quantity);

            cout << "Product updated" << endl;
            cout << "-----------------------------------------------------------" << endl;
            break;
        }

        case '5': {
            cout << "Your Cart: " << endl;
            cout << cart;
            break;
        }
        case '6': {
            cout << "Products Available: " << endl;
            cout << inventory;
            break;
        }
        case '7': { //FIXME: add toFile()
            //cart.toFile(); //filename to insert
            cout << "Inventory saved to file." << endl;
            cout << "-----------------------------------------------------------" << endl;
            break;
        }
        case '8': { //FIXME: add fromFile()
            //cart.fromFile(); //filename to insert
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