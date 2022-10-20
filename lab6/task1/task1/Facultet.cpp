#include "Facultet.h"
#include "Grupa.h"
#include <iostream>
using namespace std;

Facultet::Facultet() : name(""), groupAmount(0), groupList(nullptr) {}
Facultet::Facultet(string name, int groupAmount)
    : name(name), groupAmount(groupAmount) {
    this->groupList = new Grupa[groupAmount];
}
Facultet::Facultet(string name, int groupAmount, Grupa* gr)
    : name(name), groupAmount(groupAmount), groupList(gr) {}
void Facultet::setName(string name) {
    this->name = name;
}

Facultet::~Facultet() {
    if (groupList) {
        delete[] groupList;
    }
}