#include <iostream>
#include "Sales.h"

Sales::Sales() {
	for (int i = 0; i < 3; i++)
		this->totalPrice[i] = 0;
}
void Sales::setData() {
	for (int i = 0; i < 3; i++) {
		std::cout << "Enter sales for " << i << " mounth: ";
		std::cin >> this->totalPrice[i];
	}
}
void Sales::getData() const {
	for (int i = 0; i < 3; i++) {
		std::cout << "Sales for " << i << " mounth are: " << this->totalPrice[i] << std::endl;
	}
}