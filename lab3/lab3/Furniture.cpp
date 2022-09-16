#include "Furniture.h"
//#include <iostream>
#include <cassert>
#define N 16
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



istream& operator >> (istream& is, Furniture& furn ){
    char c, buff[N];
    is >> furn.weight;
    cin >> c;
    assert(c == '_');
    cin >> buff;
    //is >> buff;
    //is >> furn.room;
    furn.setRoom(buff);
    return is;
}

ostream& operator <<(ostream& os, const Furniture& furn)
{
    os << furn.room << "(" << furn.weight << ")";
    return os;
}
