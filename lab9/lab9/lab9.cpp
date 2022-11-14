#include <iostream> // Для потокового введення-виведення
#include <string> // Для роботи з рядковими типами даних
#include "windows.h"
#include <climits>
#include <stdlib.h>
#include <cmath>
#include <cstdint>

using namespace std;
#include <process.h> //for exit()
const int LIMIT = 100; //array size

class Integer32;
//template <typename T>
class Exceptions;

//template <typename T>
//class BetterExcetions;


////////////////////////////////////////////////////////////////
//template <typename T = long>
class Exceptions {
public:
	Exceptions() : error(0), errorValue(0) {}
	//Exceptions(string s, T index = 0) : error(s), errorValue(index) {}
	Exceptions(string s, long index = 0) : error(s), errorValue(index) {}
	string getError() const;
	string getRowError() const;
	//T getRowValue() const {
	long getRowValue() const;
	//friend ostream& operator <<(const ostream&, const Exceptions<T> obj);
	friend ostream& operator <<(const ostream&, const Exceptions& obj);

private:
	string error;
	long errorValue;
	//T errorValue;
};

string Exceptions::getError() const {
	if (!errorValue)
		return this->error;
	else
		return this->error + " (" + to_string(this->errorValue) + ")";
}
string Exceptions::getRowError() const {
	return this->error;
}
//T getRowValue() const {
long Exceptions::getRowValue() const {
	return this->errorValue;
}

//template <typename T = long>
//ostream& operator<< (const ostream& os, const Exceptions<T>& obj) {
ostream& operator<< (ostream& os, const Exceptions& obj) {
	os << obj.getRowError() << " (" << &obj << ", " << obj.getRowValue() << ")" << endl;
	return os;
}



class Integer32 {
private:
	long int data;
public:
	Integer32();
	Integer32(long int);
	void setData(long int);
	int getData() const;
	void annul();
	Integer32 operator +(const Integer32& y) const;
	Integer32 operator -(const Integer32& y) const;
	Integer32 operator *(const Integer32& y) const;
	Integer32 operator /(const Integer32& y) const;
};

using namespace std;



Integer32::Integer32() {
	this->annul();
}

Integer32::Integer32(long int newData) {
	this->setData(newData);
}

int Integer32::getData() const {
	return this->data;
}
void Integer32::annul() {
	this->data = 0;
}

void Integer32::setData(long int newData) {
	this->data = newData;
}


Integer32 Integer32::operator +(const Integer32& y) const {
	long long int res = this->data;
	res += y.data;
	if (res > INT_MAX || res < INT_MIN) {
		cout << "overflow" << endl;
		exit(EXIT_FAILURE);
	}
	return Integer32(res);
}

Integer32 Integer32::operator -(const Integer32& y) const {
	return Integer32(this->data - y.data);
}

Integer32 Integer32::operator *(const Integer32& y) const {
	return Integer32(this->data * y.data);
}

Integer32 Integer32::operator /(const Integer32& y) const {
	if (!y.data) {
		//cout << "Error: division by zero" << endl;
		//exit(1);
		//throw BetterExcetions<>("Error: division by zero", 0);
		//throw Exceptions<long>("Error: division by zero", y.data);
		throw Exceptions("Error: division by zero", y.data);
	}
	return Integer32(this->data / y.data);
}





//template <typename T = long>
//class BetterExcetions : public Exceptions<> {
//public:
//	BetterExcetions() : Exceptions(){}
//	BetterExcetions(string err, T val) : Exceptions(err, val){}
//	friend ostream& operator <<(const ostream&, const Exceptions<T> obj);
//private:
//	//Exceptions<T> address;
//};
//
//template <typename T = long>
//ostream& operator<< (const ostream& os, const Exceptions<T> &obj) {
//	os << obj.getRowError << " (" << &obj << ", " << obj.getRowValue() << endl;
//	return os;
//}

class safearay
{
private:
	int arr[LIMIT];
public:
	int& operator [](int n)
	{
		if (n < 0 || n >= LIMIT)
		{
			//cout << "\nIndex out of bounds";
			//throw Exceptions<int>("Index out of bounds", n);
			throw Exceptions("Index out of bounds", n);
		}
		return arr[n];
	}
};
////////////////////////////////////////////////////////////////





int main()
{
	try {
		safearay sa1;
		Integer32 it(42), res, res2;
		res = it / 42;
		res2 = it / 0;
		int j;
		for (int j = 0; j < LIMIT; j++)
			sa1[j] = j * 10; //*left* side of equal sign
		for (j = 0; j < LIMIT + 3; j++) //display elements
		{
			int temp = sa1[j]; //*right* side of equal sign
			cout << "Element " << j << " is " << temp << endl;
		}
	}
	//catch (Exceptions<int> e) {
	catch (Exceptions e) {
		//cout << e.getError() << ": " << e.getRowValue() << endl;
		cout << e;
	}
	
	return 0;
}
