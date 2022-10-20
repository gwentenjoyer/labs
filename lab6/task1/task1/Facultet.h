#pragma once
#include "Grupa.h"
#include <string>

class Facultet {
private:
    std::string name;
    Grupa* groupList;
    int groupAmount;
public:
    //Facultet();
    Facultet(std::string, int);
    Facultet(std::string, int, Grupa*);
    void setName(std::string );
    void showGroups() const;
    ~Facultet();

    friend std::ostream& operator << (std::ostream& os, const Facultet&);
    friend std::istream& operator >> (std::istream is, Facultet&);
};

