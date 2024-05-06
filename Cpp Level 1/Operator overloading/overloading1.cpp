#include <iostream>

class AddX
{
private:
    int x;

public:
    AddX(int x) : x(x) {}
    int operator()(int y) const { return x + y; }
};

int main()
{
    AddX obj(10);
    std::cout << obj(2) << "\n";
    return 0;
}