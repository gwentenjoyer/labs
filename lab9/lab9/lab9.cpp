#include <iostream> // Для потокового введення-виведення
#include <cstring> // Для роботи з рядковими типами даних
#include "windows.h"

using namespace std;
#include <process.h> //for exit()
const int LIMIT = 100; //array size
////////////////////////////////////////////////////////////////

class Exceptions {
public:
	Exceptions() : error(0) {}
	Exceptions(string s) : error(s) {}
	string getError() const {
		return this->error;
	}
private:
	string error;
};

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
			throw Exceptions("Index out of bounds");
		}
		return arr[n];
	}
};
////////////////////////////////////////////////////////////////
int main()
{
	try {
		safearay sa1;
		int j;
		for (int j = 0; j < LIMIT; j++)
			sa1[j] = j * 10; //*left* side of equal sign
		for (j = 0; j < LIMIT +3; j++) //display elements
		{
			int temp = sa1[j]; //*right* side of equal sign
			cout << "Element " << j << " is " << temp << endl;
		}
	}
	catch (Exceptions e) {
		cout << e.getError() << endl;
	}
	return 0;
}
