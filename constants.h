/*
 *	Defines constants used across all classes
 */
#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <string>

enum TYPE {
	grocery, //not taxable, set price
	produce, //not taxable, weighed by lb
	taxable //taxable, set price
};

#endif