#include "Header.h"
using namespace std;


void Student::setSurname(string surn) {
    this->surname = surn;
}
void Student::setName(string name) {
    this->name = name;
}
void Student::setFname(string fname) {
    this->fname = fname;
}
void Student::setPhoneNum(string num) {
    this->phoneNum = num;
}
void Student::setAge(int age) {
    this->age = age;
}

string Student::getSurname() const {
    return this->surname;
}
string Student::getName() const {
    return this->name;
}
string Student::getFname() const {
    return this->fname;
}
string Student::getPhoneNum() const {
    return this->phoneNum;
}
int Student::getAge() const {
    return this->age;
}


ostream& operator <<(ostream& is, const Student st) {
    is << st.name << ", " << st.surname << ", " << st.fname << ", " << st.phoneNum << ", " << st.age << endl;
    return is;
}



Furniture::Furniture() : weight(0), room("") {}
Furniture::Furniture(string room, int weight) {
    //cout << "Parametrized furniture constructor" << endl;
    setRoom(room);
    setWeight(weight);
}
Furniture::Furniture(const Furniture& src) {
    //cout << "Parametrized furniture constructor (link)" << endl;
    setRoom(src.getRoom());
    setWeight(src.getWeight());
}
Furniture::~Furniture() {}

void Furniture::setRoom(string room) {
    this->room = room;
}

void Furniture::setWeight(int weight) {
    this->weight = weight;
}

string Furniture::getRoom() const {
    return this->room;
}

int Furniture::getWeight() const {
    return this->weight;
}

void Furniture::input() {
    string nroom;
    int nweight;
    cout << "Enter room: ";
    cin >> nroom;
    setRoom(nroom);
    cout << "Enter weight of furniture: ";
    cin >> nweight;
    setWeight(nweight);
}

void Furniture::print() const {
    cout << "The furniture for room \"" << getRoom() << "\" has weight " << getWeight() << endl;
}

void setUaAlphabet(vector<char>& vec) {
    int i = 224;
    while (i < 250) {
        switch (i) {
        case 228:
            vec.push_back(180);
            break;
        case 230:
            vec.push_back(186);
            break;
        case 233:
            vec.push_back(179);
            vec.push_back(191);
            break;
        }
        vec.push_back(i);
        i++;
    }
    vec.push_back(252);
    vec.push_back(254);
    vec.push_back(255);
}

void setUpperCaseVol(vector<char>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        switch (vec[i]) {
        case 'à':
            vec[i] = 'À';
            break;
        case 'å':
            vec[i] = 'Ó';
            break;
        case 'è':
            vec[i] = 'È';
            break;
        case '³':
            vec[i] = '²';
            break;
        case 'î':
            vec[i] = 'Î';
            break;
        case 'ó':
            vec[i] = 'Ó';
            break;
        }
    }
}


void printVector(vector<char>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

void fillListBySurname(list<char>& lt, string surname) {
    lt.empty();
    //for (list<char>::iterator it = lt.begin(), int i = 0; i < surname.size(); ++i) {
    for (int i = 0; i < surname.size(); ++i) {
        lt.push_back(surname[i]);
    }
}

void printList(const list<char>& lt) {
    lt.empty();
    //for (list<char>::iterator it = lt.begin(), int i = 0; i < surname.size(); ++i) {
    for (list<char>::const_iterator it = lt.cbegin(); it != lt.cend(); ++it) {
        cout << *it;
    }
    cout << endl;
}