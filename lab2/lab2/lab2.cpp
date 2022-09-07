#include <iostream>
#include <string.h>

using namespace std;

class Furniture {
    char* room; // для якої кімнати меблі
    int weight; // вага
public:
    Furniture();
    Furniture(char* room, int weight);
    Furniture(const Furniture&);
    void setRoom(char* room);
    char* getRoom();
    void setWeight(int weight);
    int getWeight();
    void print() const;
    void input();
    ~Furniture();
};

void Furniture::setRoom(char* room) {
    this->room = new char[strlen(room)];
}

int main()
{
    std::cout << "Hello World!\n";
}
