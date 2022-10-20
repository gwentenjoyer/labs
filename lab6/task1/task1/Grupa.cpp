#include "Grupa.h"
#include <iostream>
using namespace std;

Grupa::Grupa() : groupName(""), specialty(""), studCopacity(0), stud(nullptr) {}
Grupa::Grupa(string grName, string specialty, int capacity, Student* st)
    : groupName(grName), specialty(specialty), studCopacity(capacity), stud(st) {}
Grupa::~Grupa() {
}

//Grupa::Grupa(const Grupa& gr) {
//    this->groupName = gr.groupName;
//    this->specialty = gr.specialty;
//    this->studCopacity = this->studCopacity;
//    if (gr.stud) {
//        this->stud = new Student()
//    }
//}

void Grupa::showStudent(int id) {
    cout << this->stud[id];
}

std::ostream& operator << (std::ostream& os, const Grupa& gr) {
    os << "Group name: " << gr.groupName << endl
        << "Group specialty: " << gr.specialty << endl
        << "Students in group: " << gr.studCopacity << endl;
    return os;
}
