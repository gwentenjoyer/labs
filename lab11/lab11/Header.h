#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <string>

#define N 8

void setUaAlphabet(std::vector<char>& vec);
void setUpperCaseVol(std::vector<char>& vec);
void printVector(std::vector<char>&vec);
void fillListBySurname(std::list<char>&lt, std::string surname);
void printList(const std::list<char>& lt);

class Furniture {
private:
    std::string room;
    int weight;
public:
    Furniture();
    Furniture(std::string room, int weight);
    Furniture(const Furniture&);
    void setRoom(std::string room);
    std::string getRoom() const;
    void setWeight(int weight);
    int getWeight() const;
    void print() const;
    void input();
    ~Furniture();
};





class Student {
public:
    Student() : surname(""), name(""), fname(""), phoneNum(""), age(0) {}
    ~Student() {}
    void setSurname(std::string);
    void setName(std::string);
    void setFname(std::string);
    void setPhoneNum(std::string);
    void setAge(int);

    std::string getSurname() const;
    std::string getName() const;
    std::string getFname() const;
    std::string getPhoneNum() const;
    int getAge() const;

    friend std::ostream& operator <<(std::ostream& is, const Student st);
private:
    std::string surname;
    std::string name;
    std::string fname;
    int age;
    std::string phoneNum;
};
