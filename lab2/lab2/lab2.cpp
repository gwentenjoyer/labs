#include "Header.h"
using namespace std;
//List primary_el;
int main()
{
    Furniture* f = new Furniture;
    //char* furn1str = new char[16];
    char fstr[N];
    //cin >> furn1str;
    strcpy_s(fstr, N, "kitchen");
    f->setRoom(fstr);
    f->setWeight(19);
    //Furniture f1;
    //f1.input();
    Furniture f3(*f);
    f3.setWeight(55);
    cout << "Enter room: ";
    cin >> fstr;
    Furniture f2(fstr, 33);
    f->print();
    f2.print();
    f3.print();
    //strcpy_s(furn1str, 10, 
    delete f;

    List* myList = new List(f3);
    myList = new List(f2, myList);
    myList->printList();
    delete myList;
    return 0;
}
