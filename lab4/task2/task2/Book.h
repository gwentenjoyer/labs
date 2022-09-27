#pragma once
#include "Publication.h"
#include "Sales.h"

class Book : public Publication, public Sales {
private:
	int pages;
public:
	Book();
	//Book(char*, int, int);
	//Book(const Book&);
	void setPages(int);
	int getPages() const;
	void getData() const;
	void setData();
};
