/*
2160. Minimum Sum of Four Digit Number After Splitting Digits
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minimumSum(int num)
{
    vector<int> digits;
    while (num != 0)
    {
        digits.push_back(num % 10);
        num /= 10;
    }

    std::sort(digits.begin(), digits.end());

    return (digits[0] * 10 + digits[2] + digits[1] * 10 + digits[3]);
}

int main()
{
    int num = 4009;
    int result = minimumSum(num);
    std::cout << result;
    return 0;
}