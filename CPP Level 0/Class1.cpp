#include <iostream>
using namespace std;

class Student
{
    // private field (both variables)
    int id = 9;
    string name = "siddharthsinh";

public:
    // Seting both value by calling this method.
    void SetIdName(int i, string nam)
    {
        id = i,
        name = nam;
    }
    // This method will return default value of id and name if you dont set new values.
    void GetIdName()
    {
        cout << "ID: " << id << "\nname: " << name << endl;
    }
};

int main(int argc, char const *argv[])
{
    Student obj;
    obj.GetIdName();
    obj.SetIdName(3, "sidhu");
    obj.GetIdName();

    return 0;
}
