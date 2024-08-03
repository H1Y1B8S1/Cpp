#include <iostream>
#include <vector>
using namespace std;

int main()
{
    std::vector<int> nums(10, 10);

    std::vector<int>::iterator it = nums.begin();
    //auto it = nums.begin();

    while (it != nums.end())
    {
        std::cout << *it << ",";
        it++;
    }
    std::cout << std::endl;

    return 0;
}