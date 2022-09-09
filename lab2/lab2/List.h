#pragma once
#include "Furniture.h"

class List {
private:
    List* next;
    Furniture data;
public:
    List(const Furniture& newData, List* oldList = nullptr);
    ~List();
    void printList();
};