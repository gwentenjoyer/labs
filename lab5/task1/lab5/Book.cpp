#include "Book.h"
#include <iostream>

Book::Book() : Publication(), pages(0) {}
void Book::setData() {
	int tmppages;
	Publication::setData();
	std::cout << "Enter pages in the book: ";
	std::cin >> tmppages;
	setPages(tmppages);
}

void Book::getData() const {
	std::cout << "Name is \"" << this->getName() << "\"" << std::endl;
	std::cout << "Price is " << this->getPrice() << std::endl;
	std::cout << "Pages is " << getPages() << std::endl;
	//return *this;
}

int Book::getPages() const {
	return this->pages;
}

void Book::setPages(int p) {
	this->pages = p;
}
Book::Book(const Book& old) {
	setPages(old.getPages());
	setName(old.getName());
	setPrice(old.getPrice());
}