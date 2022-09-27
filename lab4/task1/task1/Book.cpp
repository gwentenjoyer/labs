#include "Book.h"
#include <iostream>

Book::Book() : Publication(), pages(0) {}
void Book::setData() {
	int tmppages;
	/*std::cout << "Enter name of book: ";
	char tmpname[64];
	int len, tmpprice;
	std::cin.getline(tmpname, 64);
	len = strlen(tmpname) + 1;
	this->name = new char[len];
	std::cout << "Enter price: ";
	std::cin >> tmpprice;
	setPrice(tmpprice);*/
	Publication::setData();
	std::cout << "Enter pages in the book: ";
	std::cin >> tmppages;
	setPages(tmppages);
}

void Book::getData() const {
	std::cout << "Name is \"" << this->getName() << "\"" << std::endl;
	std::cout << "Price is " << this->getPrice() << std::endl;
	std::cout << "Price is " << getPages() << std::endl;
	//return *this;
}

int Book::getPages() const {
	return this->pages;
}

void Book::setPages(int p) {
	this->pages = p;
}