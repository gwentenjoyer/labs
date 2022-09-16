#include "Integer.h"
#include <climits>
#include <stdlib.h>
#include <cmath>
#include <cstdint>
using namespace std;



Integer32::Integer32() {
	this->annul();
}

Integer32::Integer32(long int newData) {
	this->setData(newData);
}

int Integer32::getData() const{
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

Integer32 Integer32::operator -(const Integer32& y) {
	return Integer32(this->data - y.data);
}

Integer32 Integer32::operator *(const Integer32& y) {
	return Integer32(this->data * y.data);
}

Integer32 Integer32::operator /(const Integer32& y) {
	return Integer32(this->data / y.data);
}
