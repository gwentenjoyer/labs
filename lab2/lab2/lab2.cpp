#include <iostream>
#include <string.h>

using namespace std;

class Furniture;

class List {
private:
    List* next;
    Furniture data;
public:
    List(Furniture newData, List* oldList = nullptr) {
        data.setRoom(newData.getRoom());
        data.setWeight(newData.getWeight());
        next = oldList;
    }
    ~List() {
        if (next) {
            delete next;
        }
    }
    void printList() {
        data.print();
        if (next)
            next->printList();
    }
}primary_ptr;


class Furniture {
private:
    char* room;
    int weight;
public:
    Furniture();
    Furniture(char* room, int weight);
    Furniture(const Furniture&);
    void setRoom(char* room);
    char* getRoom() const;
    void setWeight(int weight);
    int getWeight() const;
    void print() const;
    void input();
    ~Furniture();
};

Furniture::Furniture() {
    cout << "Basic constructor" << endl;
    this->weight = 0;
    room = nullptr;
}
Furniture::Furniture(char* room, int weight){
    setRoom(room);
    setWeight(weight);
}
Furniture::Furniture(const Furniture& src) {
    //int srcRoomLen = strlen(src.getRoom());
    //this->room = new char[strlen(src.getRoom())];
    setRoom(src.getRoom());
    setWeight(src.getWeight());
}
Furniture::~Furniture() {
    //if (room != nullptr) {
    if (room) {
        delete room;
    }
}


void Furniture::setRoom(char* room) {
    this->room = new char[strlen(room)];
    strcpy(this->room, room);
}

void Furniture::setWeight(int weight) {
    this->weight = weight;
}

char* Furniture::getRoom() const{
    return this->room;
}

int Furniture::getWeight() const{
    return this->weight;
}

void Furniture::input() {
    char* nroom;
    int nweight;
    cout << "Enter room: ";
    cin >> nroom;
    setRoom(nroom);
    cout << "Enter weight of furniture: ";
    cin >> nweight;
    setWeight(nweight);
}

void Furniture::print() const{
    cout << "The furniture for room \"" << getRoom() << "\" has weight" << getWeight() << endl;
}

int main()
{
    std::cout << "Hello World!\n";
}
