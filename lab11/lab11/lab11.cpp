#include <iostream>
#include <vector>
#include <list>
#include <Windows.h>
using namespace std;

void setUaAlphabet(vector<char>& vec){
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
        case 'а':
            vec[i] = 'А';
            break;
        case 'е':
            vec[i] = 'У';
            break;
        case 'и':
            vec[i] = 'И';
            break;
        case 'і':
            vec[i] = 'І';
            break;
        case 'о':
            vec[i] = 'О';
            break;
        case 'у':
            vec[i] = 'У';
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

void fillListBySurname(list<char> &lt, string surname){
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

    fillListBySurname(lst, "Kapusniak");
    printList(lst);
    cout << "Sorting..." << endl;
    lst.sort();
    printList(lst);

    return 0;
}
