#include <iostream>
#include <vector>
#include <list>
#include <Windows.h>
#include "Header.h"

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    vector<char> vec;
    vec.reserve(33);    // ukrainian alphabet has got 33 letters
    list<char> lst;

    cout << vec.capacity() << endl;
    setUaAlphabet(vec);
    printVector(vec);
    cout << vec.size() << endl;
    setUpperCaseVol(vec);
    printVector(vec);
    cout << vec.size() << endl;

    fillListBySurname(lst, "капусняк");
    printList(lst);
    cout << "Sorting..." << endl;
    lst.sort();
    printList(lst);

    

    vector<Furniture> furn;
    furn.reserve(10);
    for (int i = 0; i < 10; ++i) {
        furn.push_back(Furniture("kitchen", i * 10 + 1));
    }

    for (int i = 0; i < furn.size(); ++i) {
        furn[i].print();
    }
    cout << endl;
    for (vector<Furniture>::iterator it = furn.begin(); it != furn.end(); ++it) {
        it->print();
    }

    list<Student> stud;
    Student st;
    st.setName("Володимир");
    st.setSurname("Великий");
    st.setFname("Батькович");
    st.setPhoneNum("+380950670680");
    st.setAge(28);

    stud.push_back(st);

    st.setName("Андрій");
    st.setSurname("Стрий");
    st.setFname("Васильович");
    st.setPhoneNum("+380676789003");
    st.setAge(28);

    stud.push_back(st);

    cout << endl;
    for (list<Student>::iterator it = stud.begin(); it != stud.end(); ++it) {
        cout << *it;
    }

    return 0;
}
