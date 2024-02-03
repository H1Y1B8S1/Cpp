/*
In Overloading we can use different types of parameter but cant use function return type different.
Untile we have same return type in functions we can use Overloading.
*/

#include <iostream>
using namespace std;

class Cal
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
    string add(string a, string b, string c)
    {
        return a + b + c;
        // return stoi(a) + stoi(b) + stoi(c); // Converting string to int values.and change return type to int.
    }
    string add()
    {
        return "Jay Shree Ram!";
    }
    // string add(int a, int b,int c) // This will throwe an error. Because return type is different
    // {                              // and passing 3 parameters is not gona work
    // }
};

int main(void)
{
    Cal C; //     class object declaration.
    cout << C.add(10, 20) << endl;
    cout << C.add(12, 20, 23) << endl;
    cout << C.add("12 ", "20 ", "23 ") << endl;
    cout << C.add() << endl;
    return 0;
}