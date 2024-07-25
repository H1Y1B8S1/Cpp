#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    void set(int a)
    {
        this->a = a;
    }
    void display()
    {
        cout << "Class A" << endl;
    }
};

class B
{
protected:
    int a;

public:
    void set(int a)
    {
        this->a = a;
    }
    void display()
    {
        cout << "Class B" << endl;
    }
};

class C : public A, public B
{
public:
    void display()
    {
        cout << "The value of ClassA::a is : " << A::a << endl;
        cout << "The value of ClssB::a is : " << B::a << endl;
        cout << "Addition of ClassA::a and ClssB::a is : " << A::a + B::a<<endl;
    }
};

int main()
{
    C c;

    c.A::set(10);
    c.B::set(20);

    c.display();
    
    c.A::display();
    c.B::display();

    return 0;
}