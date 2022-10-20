#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

Student::Student() {
    cout << "Surname: ";
    cin >> surname;
    cout << "Name: ";
    cin >> name;
    cout << "Father's name: ";
    cin >> fname;
    cout << "Enter No. of grade book: ";
    cin >> gradebook_num;
    cout << "Is form of education state? Y or N";
    char guess;
    cin >> guess;
    switch (guess) {
    case 'Y':
    case 'y':
        SFE = true;
        break;
    case 'N':
    case 'n':
    default:
        SFE = false;
    }

}
void Student::setSurname(string surn) {
    this->surname = surn;
}
Student::Student(string surname, string name, string fname = "", int grade_num = 0, bool sfe)
    : surname(surname), name(name), fname(fname), gradebook_num(grade_num), SFE(sfe) {}
//void Student::out() const {
//    cout << this->surname << ", " << this->name << ", " << this->fname << ", "
//        << this->gradebook_num << ", ";
//    if (this->SFE) {
//        cout << "YES";
//    }
//    else {
//        cout << "NO";
//    }
//    cout << endl;
//}

istream& operator >> (istream is, Student& st) {
    cout << "Surname: ";
    is >> st.surname;
    cout << "Name: ";
    is >> st.name;
    cout << "Father's name: ";
    is >> st.fname;
    cout << "Enter No. of grade book: ";
    is >> st.gradebook_num;
    cout << "Is form of education state? Y or N";
    char guess;
    cin >> guess;
    switch (guess) {
    case 'Y':
    case 'y':
        st.SFE = true;
        break;
    case 'N':
    case 'n':
    default:
        st.SFE = false;
    }
    return is;
}

ostream& operator << (ostream& os, const Student& st) {
    os << st.surname << ", " << st.name << ", " << st.fname << ", "
        << st.gradebook_num << ", ";
    if (st.SFE) {
        os << "YES";
    }
    else {
        os << "NO";
    }
    os << endl;
    return os;
}