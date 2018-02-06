#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    int id;
    // เพิ่มเอาเอง
    string name;
    int age;
    double height;

public:
    Student(int i, string n, int a, double h)
    {
        id = i;
        name = n;
        age = a;
        height = h;

    }
    int getId()
    {
        return id;
    }
    string getname()
    {
        return name;
    }
    int getage()
    {
        return age;
    }
    double getheight()
    {
        return height;
    }
    // เพิ่มเอาเอง
};

int main ()
{
    Student Noctis (36548, "Noctis", 20, 176);
    Student Ignis(36549, " Ignis", 20, 183);
    Student Gladioulus (36550, "Gladioulus", 20, 198);
    Student Prompto (36551, "Prompto", 20, 173);

    cout << "Id :" << Noctis.getId() << endl;
    cout << "Name :" << Noctis.getname() << endl;
    cout << "Age :" << Noctis.getage() << endl;
    cout << "Height :" << Noctis.getheight() << endl;

    cout << "Id :" << Ignis.getId() << endl;
    cout << "Name :" << Ignis.getname() << endl;
    cout << "Age :" << Ignis.getage() << endl;
    cout << "Height :" << Ignis.getheight() << endl;

    cout << "Id :" << Gladioulus.getId() << endl;
    cout << "Name :" << Gladioulus.getname() << endl;
    cout << "Age :" << Gladioulus.getage() << endl;
    cout << "Height :" << Gladioulus.getheight() << endl;

    cout << "Id :" << Prompto.getId() << endl;
    cout << "Name :" << Prompto.getname() << endl;
    cout << "Age :" << Prompto.getage() << endl;
    cout << "Height :" << Prompto.getheight() << endl;


    return 0;
}
