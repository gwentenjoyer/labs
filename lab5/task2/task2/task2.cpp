#include <iostream>
#include <conio.h>
#include "Publication.h"
#include "Book.h"
#include "Tape.h"

#define N 2

using namespace std;

int main()
{
    /*Book b;
    b.setData();
    b.getData();
    Tape t;
    cin.ignore();
    t.setData();
    t.getData();*/
    short guess;
    Publication* arr[4];

    for (int i = 0; i < N; i++) {
        do {
            cout << "Create publication Book (1), Tape (2): ";
            cin >> guess;
            cin.ignore();
            //_getch(guess);
            switch (guess) {
            case 1:
                cout << "You chose Book" << endl;
                arr[i] = new Book();
                arr[i]->setData();
                break;
            case 2:
                cout << "You chose Tape" << endl;
                arr[i] = new Tape();
                arr[i]->setData();
                break;
            default:
                cout << "Wrong category. Try again" << endl;

                break;
            }
        } while (guess != 1 && guess != 2);
    }

    for (int i = 0; i < N; i++) {
        arr[i]->getData();
        if (arr[i]->isOversize()) {
            cout << "Oversized!" << endl;
        }
    }

    return 0;
}