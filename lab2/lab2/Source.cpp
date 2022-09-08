#include "Header.h"
using namespace std;

Furniture::Furniture() {
    cout << "Basic constructor" << endl;
    this->weight = 0;
    room = nullptr;
}
Furniture::Furniture(char* room, int weight) {
    cout << "Parametrized constructor" << endl;
    setRoom(room);
    setWeight(weight);
}
Furniture::Furniture(const Furniture& src) {
    cout << "Parametrized constructor (link)" << endl;
    //int srcRoomLen = strlen(src.getRoom());
    //this->room = new char[strlen(src.getRoom())];
    setRoom(src.getRoom());
    setWeight(src.getWeight());
}
Furniture::~Furniture() {
    cout << "Dectructor" << endl;
    //if (room != nullptr) {
    if (room) {
        delete room;
    }
}

void Furniture::setRoom(char* room) {
    int roomLen = strlen(room) + 1;
    this->room = new char[roomLen];
    //strcpy_s(this->room, room);
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
    //char* nroom;
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
