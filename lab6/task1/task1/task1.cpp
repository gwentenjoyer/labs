#include <iostream>
#include <string>
#include <Windows.h>
#include "Student.h"
#include "Grupa.h"
#include "Facultet.h"
#define STUDENTS 3
using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //Student stud2("Іваненко", "Іван",  "Іванович", 65334, 1), *stud3 = new Student(stud2);


    /**************** task 1 /****************/
    Student studs[STUDENTS] = {Student(), Student("Іваненко", "Іван",  "Іванович", 65334, 1), Student(studs[1]) };

    studs[1].setSurname("Ivanenko");
    for (int i = 0; i < STUDENTS; ++i) {
        cout << studs[i];
    }

    /**************** task 1 /****************/


    /**************** task 2 /****************/
    Student *st = new Student[3]{ 
        Student("Іваненко", "Іван", "Іванович", 65334, 1), 
        Student("Петренко", "Петро", "Федорович", 65334),
        Student("Мінімальний", "Максим", "Середньович", 23464, 0)};

    Grupa* gr = new Grupa("cs", "comp sci", 3, st);
    cout << *gr;
    gr->showStudent(1);
    delete gr;

    for (int i = 0; i < 3; ++i) {
        cout << st[i];
    }

    /**************** task 2 /****************/
    

    /**************** task 3 /****************/
    Grupa* group = new Grupa[2]{ 
        Grupa("se", "softwave engineer", 3, st), 
        Grupa("cs", "computer science", 3, st)
    };
    Facultet *facul = new Facultet("electronic machines", 2, group);
    cout << *facul;
    facul->showGroups();
    delete facul;

    /**************** task 3 /****************/

}
