#include <iostream>
#include <string>
#include <Windows.h>
#include "Student.h"
#include "Grupa.h"
#include "Facultet.h"

using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //Student stud;
    Student stud2("Іваненко", "Іван",  "Іванович", 65334, 1), *stud3 = new Student(stud2);
    Student *st = new Student[3]{ 
        Student("Іваненко", "Іван", "Іванович", 65334, 1), 
        Student("Петренко", "Петро", "Федорович", 65334),
        Student("Мінімальний", "Максим", "Середньович", 23464, 0)};
    //Student stud, stud2("Іваненко", "Іван",  "Іванович", 65334, 1), *stud3 = new Student(stud2);
    //stud3->setSurname("Петренко");
    //stud.out();
    cout << stud2 << endl;
    cout << *stud3 << endl;
    /*stud2.out();
    stud3->out();*/
    Grupa *gr = new Grupa("cs", "comp sci", 3, st);
    cout << *gr;
    //gr->out();
    //Facultet f("elec ap", 3, gr);
    //delete stud3;
}
