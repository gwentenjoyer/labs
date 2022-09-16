//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Integer.h"
#include "Furniture.h"
#include "string.h"
#include "Int.h"

#define N 16
using namespace std;


int getNumLen(int decNum) {
	int len = 0;
	//for (len; decNum; decNum /= 10, len++);
	while (decNum) {
		decNum /= 10;
		len++;
	}
	return len;
}
int main()
{
	/*cout << sizeof(long long) << "\t" << sizeof(long) << endl;
	cout << LLONG_MAX << "\t" << LONG_MAX << endl;*/
	Integer32 x(LONG_MIN), y, z(20);
	y = x + z;
	cout << y.getData() << endl;
	Integer32 f = x / z;
	cout << f.getData() << endl;

	char buff[N];
	strcpy_s(buff, N, "kitchen");
	Furniture furn1(buff, 42), furn2;
	cout << furn1 << endl;
	cout << "enter values in forman: weight_room" << endl;
	cin >> furn2;
	cout << furn2 << endl;

	Int one;
	one.setSys(8);
	one.setNum(2524);
	cout << one.getNum() << endl;
	Int two(one);
	two.setSys(2);
	two.setNum(127);
	Int three(255, 16);
	cout << one << endl << two << endl << three << endl;
	//cout << sizeof(long long) << "\t" << sizeof(long) << endl;
	cout << "Enter number in format: numerical_system:decimal_number" << endl;
	cin >> one;
	cout << one;
	return 0;
}
