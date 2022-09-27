#include "Publication.h"
#include <string.h>
#include <iostream>

Publication::Publication() : name(nullptr), price(0) {}
Publication::Publication(char* nName, int nPrice){
	setName(nName);
	setPrice(nPrice);
}
Publication::Publication(const Publication& old){
	setName(old.name);
	setPrice(old.price);
}

Publication::~Publication() {
	if (this->name) {
		delete[] this->name;
	}
}

void Publication::setName(char* nName) {
	if (this->name) {
		delete[] this->name;
	}
	int len = strlen(nName) + 1;
	this->name = new char[len];
	strcpy_s(this->name, len, nName);
}
void Publication::setPrice(int nPrice) {
	this->price = nPrice;
}

char* Publication::getName() const {
	return this->name;
}
int Publication::getPrice() const {
	return this->price;
}

void Publication::setData() {
	std::cout << "Enter name of the publication: ";
	char tmpname[64];
	int tmpprice;
	std::cin.getline(tmpname, 64);
	setName(tmpname);
	//std::cin.ignore();
	std::cout << "Enter price: ";
	std::cin >> tmpprice;
	setPrice(tmpprice);
}

void Publication::getData() {
	std::cout << "Name is \"" << this->getName() << "\"" << std::endl;
	std::cout << "Price is " << this->getPrice() << std::endl;
	//return *this;
}