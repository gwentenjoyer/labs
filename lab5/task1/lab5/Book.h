#pragma once
#include "Publication.h"

class Book : public Publication {
private:
	int pages;
public:
	Book();
	//Book(char*, int, int);
	Book(const Book&);
	void setPages(int);
	int getPages() const;
	void getData() const override;
	void setData() override;
};