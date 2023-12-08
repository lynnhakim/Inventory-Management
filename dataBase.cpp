#include "Database.h"

Database::Database() {
    // Constructor implementation 
}

void Database::makeFile( Inventory inventory) {
    std::ofstream outputFile("dbfile.txt"); // Will have to add a file 

    if (outputFile.is_open()) {
        for (int i = 0; i < inventory.GetSize(); ++i) {
            outputFile << inventory.GetItem(i).GetName() << ","
                       << inventory.GetItem(i).GetPrice() << ","
                       << inventory.GetItem(i).GetType() << "\n";
            // output 
        }
        outputFile.close();
    } else {
        std::cout << "Unable to create database file!" << std::endl;
        // Implement appropriate error handling here
    }
}

void Database::updateFile(const Inventory& inventory) {
    // Implement updating the existing database with Inventory changes
    // Similar to makeFile but for updating changes
}

void Database::printFile() const {
    // Printing details 
}
