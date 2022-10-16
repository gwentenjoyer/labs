#include <iostream>
#include "Parallelogram.h"
#include "Quadrangle.h"
#include "Rhombus.h"

#define N 4

using namespace std;
int main()
{
    short guess;
    Quadrangle* arr[4];

    for (int i = 0; i < N; i++) {
        do {
            cout << "Create figure: Quadrangle (1), Parallelogram (2), Rhombus (3): ";
            cin >> guess;
            cin.ignore();
            //_getch(guess);
            switch (guess) {
            case 1:
                cout << "You chose Quadrangle" << endl;
                arr[i] = new Quadrangle(2, 3, 4, 5);
                break;
            case 2:
                cout << "You chose Parallelogram" << endl;
                arr[i] = new Parallelogram(4, 5);
                break;
            case 3:
                cout << "You chose Rhombus" << endl;
                arr[i] = new Rhombus(2);
                break;
            default:
                cout << "Wrong category. Try again" << endl;

                break;
            }
        } while (guess < 1 || guess >= N);
    }

    for (int i = 0; i < N; i++) {
        cout << arr[i]->perimeter() << endl;
        if (arr[i]) {
            delete arr[i];
        }
    }
    return 0;
}