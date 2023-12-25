#include <iostream>
using namespace std;

class Student
{
public:
    int n = 9;
    string name = "siddharthsinh";
};

int main(int argc, char const *argv[])
{
    Student obj;
    cout << obj.name << endl;
    return 0;
}
