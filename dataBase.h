#pragma once
#include <iostream>
#include <fstream>
#include "Inventory.h" // will work with inventory

class Database {
public:
    Database(); // Constructor 

    void makeFile(const Inventory& inventory);
    void updateFile(const Inventory& inventory); // updating files
    void printFile() const; // Print database contents

private:
   //will use this to add private methods
};
