#include "Header.h"
using namespace std;

Furniture::Furniture() {
    cout << "Basic furniture constructor" << endl;
    this->weight = 0;
    room = nullptr;
}
Furniture::Furniture(char* room, int weight) {
    cout << "Parametrized furniture constructor" << endl;
    setRoom(room);
    setWeight(weight);
}
Furniture::Furniture(const Furniture& src) {
    cout << "Parametrized furniture constructor (link)" << endl;
    setRoom(src.getRoom());
    setWeight(src.getWeight());
}
Furniture::~Furniture() {
    cout << "Furniture dectructor" << endl;
    if (room) {
        delete room;
    }
}

void Furniture::setRoom(char* room) {
    int roomLen = strlen(room) + 1;
    this->room = new char[roomLen];
    strcpy_s(this->room, roomLen, room);
}

void Furniture::setWeight(int weight) {
    this->weight = weight;
}

char* Furniture::getRoom() const {
    return this->room;
}

int Furniture::getWeight() const {
    return this->weight;
}

void Furniture::input() {
    char nroom[N];
    int nweight;
    cout << "Enter room: ";
    cin >> nroom;
    setRoom(nroom);
    cout << "Enter weight of furniture: ";
    cin >> nweight;
    setWeight(nweight);
}

void Furniture::print() const {
    cout << "The furniture for room \"" << getRoom() << "\" has weight " << getWeight() << endl;
}



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