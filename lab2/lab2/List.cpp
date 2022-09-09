#include "List.h"
#include "Common.h"
using namespace std;

List::List(const Furniture& newData, List* oldList) {
    cout << "List parametrized constructor" << endl;
    data.setRoom(newData.getRoom());
    data.setWeight(newData.getWeight());
    next = oldList;
}
List::~List() {
    cout << "List destructor" << endl;
    if (next) {
        delete next;
    }
}
void List::printList() {
    data.print();
    if (next)
        next->printList();
}