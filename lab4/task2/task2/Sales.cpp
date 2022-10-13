#include <iostream>
#include "Sales.h"

Sales::Sales() {
	for (int i = 0; i < 3; i++)
		this->totalPrice[i] = 0;
}
void Sales::setData() {
	for (int i = 0; i < 3; i++) {
		std::cout << "Enter sales for " << i + 1 << " mounth: ";
		std::cin >> this->totalPrice[i];
	}
}
void Sales::getData() const {
	for (int i = 0; i < 3; i++) {
		std::cout << "Sales for " << i + 1 << " mounth are: " << this->totalPrice[i] << std::endl;
	}
}