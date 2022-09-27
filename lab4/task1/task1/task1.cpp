#include <iostream>
#include "Book.h"
#include "Tape.h"
using namespace std;

int main()
{
    Book b;
    b.setData();
    b.getData();
    Tape t;
    cin.ignore();
    t.setData();
    t.getData();
    return 0;
}
