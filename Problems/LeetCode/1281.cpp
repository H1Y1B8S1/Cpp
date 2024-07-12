/*
1281. Subtract the Product and Sum of Digits of an Integer
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n = 234;
    vector<int> nums;
    int mul = 1;
    int sum = 0;

    while (n != 0)
    {
        nums.push_back(n % 10);
        n /= 10;
    }

    for (int i : nums)
    {
        mul *= i;
        sum += i;
    }

    std::cout << mul - sum;
    return 0;
}