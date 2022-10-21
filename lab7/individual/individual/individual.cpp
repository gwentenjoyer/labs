#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
	Stack<int> st;
	st.push(16);
	cout << "current size:" << st.getSize() << endl;
	st.push(8);
	cout << "current size:" << st.getSize() << endl;
	st.printAll();
	cout << "popped " << st.pop() << endl;
	cout << "current size:" << st.getSize() << endl;
	st.printAll();
	cout << "popped " << st.pop() << endl;
	st.printAll();
	return 0;
}
