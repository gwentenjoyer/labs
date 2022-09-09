#include "List.h"
#include "Furniture.h"
#include "Common.h"
using namespace std;

int main()
{
    Furniture* dynFurniture = new Furniture;
    char roomBuffer[N];

    strcpy_s(roomBuffer, N, "kitchen");
    dynFurniture->setRoom(roomBuffer);
    dynFurniture->setWeight(19);

    Furniture furniture1;
    furniture1.input();

     Furniture furniture3(*dynFurniture);
     furniture3.setWeight(55);

     cout << "Enter room: ";
     cin >> roomBuffer;
     Furniture furniture2(roomBuffer, 33);

     dynFurniture->print();
     furniture2.print();
     furniture3.print();

     delete dynFurniture;

     List* myList = new List(furniture3);
     myList = new List(furniture2, myList);
     myList->printList();
     delete myList;

    return 0;
}
