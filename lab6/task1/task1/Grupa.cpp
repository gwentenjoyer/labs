#include "Grupa.h"
#include <iostream>
using namespace std;

Grupa::Grupa() : groupName(""), specialty(""), studCopacity(0), stud(nullptr) {}
Grupa::Grupa(string grName, string specialty, int capacity, Student* st)
    : groupName(grName), specialty(specialty), studCopacity(capacity), stud(st) {}
Grupa::~Grupa() {
    /*if (!stud) {
        delete[] stud;
    }*/
}
void Grupa::out() const {
    cout << "Group name: " << this->groupName << endl
        << "Group specialty: " << this->specialty << endl
        << "Students in group: " << this->studCopacity << endl;
}

std::ostream& operator << (std::ostream& os, const Grupa& gr) {
    os << "Group name: " << gr.groupName << endl
        << "Group specialty: " << gr.specialty << endl
        << "Students in group: " << gr.studCopacity << endl;
    return os;
}
