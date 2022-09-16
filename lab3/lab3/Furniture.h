#pragma once
#include <iostream>

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
    friend std::istream& operator >> (std::istream& is, Furniture& furn);
    friend std::ostream& operator <<(std::ostream& out, const Furniture& furn);

};
