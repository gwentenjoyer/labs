#pragma once
#include "Student.h"
#include <iostream>

class Grupa {
private:
    std::string groupName;
    std::string specialty;
    int studCopacity;
    Student* stud;
public:
    Grupa();
    Grupa(std::string, std::string, int, Student*);
    //Grupa(const Grupa&);
    void showStudent(int id);
    ~Grupa();

    friend std::ostream& operator << (std::ostream& os, const Grupa& gr);
    friend std::istream& operator >> (std::istream is, Grupa&);
};
