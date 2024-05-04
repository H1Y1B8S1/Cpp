#include <iostream>
#include <algorithm> // Include <algorithm> for std::copy

class managed_array
{
private:
    int *NewArray;

public:
    // Explicit constructor to prevent implicit conversions
    explicit managed_array(size_t size)
    {
        NewArray = new int[size]; // Allocate memory for the array
        std::cout << "Array size:" << size << "\n";
    }

    ~managed_array()
    {
        delete[] NewArray;
        std::cout << "array deleted.\n";
    }
};

int main(){
    managed_array obj(10);

}
