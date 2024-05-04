#include <iostream>

class WorkinClass
{
private:
    float privateVar1, privateVar2;

public:
    void SetPrivateVar1(float value) { privateVar1 = value; }
    void SetPrivateVar2(float value) { privateVar2 = value; }
    float _privateVar1() { return privateVar1; }
    float _privateVar2() { return privateVar2; }
};

int main()
{
    WorkinClass obj;

    obj.SetPrivateVar1(35.3);
    obj.SetPrivateVar2(34.1);
    std::cout << "privateVar1:" << obj._privateVar1() << "\n";
    std::cout << "privateVar2:" << obj._privateVar2() << "\n";
    return 0;
}