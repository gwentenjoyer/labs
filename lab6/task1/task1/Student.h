#pragma once
#include <string>
class Student {
private:
    std::string surname;
    std::string name;
    std::string fname;
    int gradebook_num;
    bool SFE;           // state form of education
public:
    Student();
    void setSurname(std::string surn);
    Student(std::string, std::string, std::string, int, bool sfe = false);
    friend std::ostream& operator << (std::ostream& os, const Student&);
    friend std::istream& operator >> (std::istream is, Student&);
};

