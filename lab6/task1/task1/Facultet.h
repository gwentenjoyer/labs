#pragma once
#include "Grupa.h"
#include <string>

class Facultet {
private:
    std::string name;
    Grupa* groupList;
    int groupAmount;
public:
    Facultet();
    Facultet(std::string, int);
    Facultet(std::string, int, Grupa*);
    void setName(std::string );
    ~Facultet();
};

