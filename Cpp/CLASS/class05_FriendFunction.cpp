/*
→ If a function OR Class is defined as a friend in C++,
    then the "protected and private data" of a class can be accessed by them.
→ By using the keyword friend compiler knows the given function/Class is a friend function/Class.
→ For accessing the data, the declaration of a friend
    function/CLass should be done inside the body of a class starting with the keyword friend.
*/

#include <iostream>
using namespace std;
class Box
{
private:
    int length;

public:
    Box() : length(0) {}
    friend int printLength(Box); // friend function
};

int printLength(Box b)
{
    b.length += 10;
    return b.length;
}

int main()
{
    Box Obj;
    cout << "Length of box: " << printLength(Obj) << endl;
    return 0;
}