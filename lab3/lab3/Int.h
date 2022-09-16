#pragma once
#include <iostream>

class Int {
private:
	int numSys;
	char* number;
	char* convDecToNumSys(int n, int numSys);
	//char* reverseNumber(char*);
public:
	Int();
	//Int(char* newNum, int newNumSys);
	Int(int newNum, int newNumSys);
	Int(const Int&);
	//void setNum(char* num);

	void setNum(int);
	char* getNum() const;
	void setSys(int);
	int getSys() const;
	//void print() const;
	void input();
	~Int();
	Int& operator = (const Int&);
	friend std::istream& operator >> (std::istream&, Int& );
	friend std::ostream& operator <<(std::ostream&, const Int&);
};