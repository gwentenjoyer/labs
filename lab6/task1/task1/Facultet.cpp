#include "Facultet.h"
#include "Grupa.h"
#include <iostream>
using namespace std;

//Facultet::Facultet() : name(""), groupAmount(0), groupList(nullptr) {}
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
        cout << "groups deleted" << endl;
    }
}


void Facultet::showGroups() const {
    for (int i = 0; i < this->groupAmount; i++)
        cout << this->groupList[i] << endl;
}

istream& operator >> (istream is, Facultet& f) {
    cout << "Name of faculty: ";
    is >> f.name;
    cout << "Amount of groups: ";
    is >> f.name;
    return is;
}

ostream& operator << (ostream& os, const Facultet& f) {
    os << f.name << ", " << f.groupAmount << endl;
    os << endl;
    return os;
}