#include <iostream>
#include "Parallelogram.h"
#include "Quadrangle.h"
using namespace std;
int main()
{
    Quadrangle qr;
    Parallelogram par(-1, 3, 2, 3, -2, 1, 1, 1);
    cout << par.mult() << endl;
    par.setParall();
    cout << "Square is " << par.square() << endl;
    return 0;
}
