/*
C++ introduces a third visibility modifier, i.e., protected. 
The member which is declared as protected will be accessible to all the member 
functions within the class as well as the class immediately derived from it.
*/


#include <iostream>
using namespace std;

class Animal
{
    int a = 2, b = 4;

public:
    void eat()
    {
        cout << "Eating..." << endl;
    }

protected:
    int mul()
    {
        return a * b;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Barking...";
    }

    void display()
    {
        int result = mul();
        cout << "\nMultiplicaion of a and b is :" << result << endl;
    }
};

int main(void)
{
    Dog d1;
    d1.eat();
    d1.bark();

    d1.display();
    return 0;
}