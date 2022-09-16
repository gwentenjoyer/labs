#define _CRT_SECURE_NO_WARNINGS
#include "Int.h"
#include <cassert>
#define N 16
using namespace std;



Int::Int() {
	cout << "Basic Int constructor" << endl;
	this->numSys = 0;
	this->number = nullptr;
}
//Int::Int(char* newNum, int newSys) {
Int::Int(int newNum, int newSys){
	cout << "Parametrized Int constructor" << endl;
	setSys(newSys);
	setNum(newNum);
}
Int::Int(const Int& src) {
	cout << "Parametrized Int constructor (link)" << endl;
	//setNum(src.getNum());
	int len = strlen(src.getNum()) + 1;
	this->number = new char[len];
	strcpy_s(this->number, len, src.getNum());

	setSys(src.getSys());
}

char* Int::convDecToNumSys(int n, int numSys)	//
{
	// unsafe function
	//char* chNum = new char[32];
	char chNum[32];

	int i = 0;
	if (!(numSys == 2 || numSys == 8 || numSys == 10 || numSys == 16)) {
		cout << "wrong numerical system" << endl;
		exit(2);
		//return nullptr;														// returns NULL if wrong numerical system
	}
	while (n != 0) {
		int temp = 0;
		temp = n % numSys;

		// according to ASCII table
		if (temp < 10) {
			chNum[i] = temp + 48;		// ASCII character of digits
		}
		else {
			chNum[i] = temp + 55;		// ASCII character of big letters
		}
		i++;
		n = n / numSys;
	}
	//chNum[i++] = '\0';
	char* resNum = new char[++i];

	int k, j;
	for (k = 0, j = i - 2; j >= 0; k++, j--) {		// reversing string to readable style
		resNum[k] = chNum[j];
	}
	resNum[k] = '\0';

	//strcpy_s(resNum, i, chNum);
	//return chNum;
	return resNum;
}

//char* Int::reverseNumber(char*){
//	int numLen = strlen(this->number) + 1;
//	char* rev = new char[numLen];
//	int i, j;
//	for (i = 0, j = numLen - 2; j >= 0; i++, j--) {
//		rev[i] = number[j];
//	}
//	rev[i] = '\0';
//	return rev;
//}

void Int::setNum(int n) {
	if (this->number) {
		delete[] this->number;
	}
	this->number = convDecToNumSys(n, this->numSys);
	//char newNum[32];
	//strcpy(newNum, convDecToNumSys(n, this->numSys));
	/*if (!newNum)
		exit(1);*/
	//int numLen = strlen(newNum) + 1;
	//char* wtf = new char[numLen];
	//strcpy_s(wtf,numLen, newNum);
	//this->number = new char[numLen];
	//strcpy_s(this->number, numLen, wtf);
}
char* Int::getNum() const {
	
	return this->number;
}
void Int::setSys(int newSys) {
	this->numSys = newSys;
}
//void Int::setSys(int newSys) : this->numSys(newSys){}
int Int::getSys() const {
	return this->numSys;
}

Int::~Int() {
	cout << "Int dectructor" << endl;
	if (this->number) {
		delete [] number;
	}
}

void Int::input() {
	cout << "Enter numerical system: ";
	cin >> numSys;
	int num;
	cout << "Enter a decimal nubmer: ";
	cin >> num;
	setNum(num);
}
//void Int::setN

istream& operator >> (istream& is, Int& obj) {
	// Enter a number using format: numerical_system:number_in_decimal_system
	char c;
	int num;
	is >> obj.numSys;
	cin >> c;
	assert(c == ':');
	cin >> num;
	obj.setNum(num);
	return is;
}
ostream& operator <<(ostream& out, const Int& obj) {
	out << obj.numSys << ":" << obj.number;
	return out;
}


Int& Int::operator = (const Int& obj) {
	//Int tmp;
	this->numSys = obj.numSys;
	if (this->number) {
		delete[] this->number;
	}
	if (!obj.number)
		this->number = nullptr;							// it would crash if read char* with nullptr
	else {
		int numLen = strlen(obj.number) + 1;
		this->number = new char[numLen];
		strcpy_s(this->number, numLen, obj.number);
	}
	return *this;
}
