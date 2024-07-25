#include <iostream>
using namespace std;

class Student
{
    // private field (both variables)
private:
    int id = 9;
    string name = "siddharthsinh";

public:
    // constructor without any permanents.
    Student() {}

    // Setting both value by constructor with parameters.
    Student(int i, string nam):id(i),name(nam)
    {
        //id = i,
        //name = nam;
    }

    // This method will return default value of id and name if you dont set new values.
    void GetIdName()
    {
        cout << "ID: " << id << "\nname: " << name << endl;
    }
};

int main(int argc, char const *argv[])
{
    Student student1 = Student(1, "siddhu"); // class object creation.
    student1.GetIdName();

    Student student2 = Student(); // no parameters so default values will be consider.
    student2.GetIdName();
    return 0;
}
