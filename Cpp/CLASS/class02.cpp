/*
This pointer:
    It can be used to pass current object as a parameter to another method.
    It can be used to refer current class instance variable.
    It can be used to declare indexers.

    so we can use same variable names for class field as well as Constructor parament.
*/

#include <iostream>
using namespace std;

class Student
{
    int id = 9;
    string name = "siddharthsinh";

public:
    Student() {}

    Student(int id, string name)
    {
        this->id = id;      // this->
        this->name = name;  // this->
    }

    void GetIdName()
    {
        cout << "ID: " << id << "\nname: " << name << endl;
    }
};

int main(int argc, char const *argv[])
{
    Student student1 = Student(1, "siddhu");

    Student student2 = Student();
    student2.GetIdName();
    return 0;
}
