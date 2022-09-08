#pragma once
#include <iostream>
#include <string.h>
#define N 16

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

class List {
private:
    List* next;
    Furniture data;
public:
    //List(const Furniture&, List* );
    List(const Furniture& newData, List* oldList = nullptr) {
        //cout << "List parametrized constructor" << endl;
        data.setRoom(newData.getRoom());
        data.setWeight(newData.getWeight());
        next = oldList;
    }
    ~List();
    void printList();
};