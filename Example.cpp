#include <vector>
#include <iostream>
#include <cmath>

using namespace std;
class Solution
{

public:
    std::vector<int> plusOne(std::vector<int> &digits)
    {

        std::vector<int> new_digits;
        long long int temp = 0;
        long long int mul = pow(10, digits.size() - 1);

        for (int num : digits)
        {
            temp += num * mul;
            mul /= 10;
        }

        // std::cout << temp << "\n";
        long long int number = ++temp;
        // std::cout << number << "\n";

        while (number > 0)
        {
            new_digits.insert(new_digits.begin(), number % 10);
            number /= 10;
        }

        /*for(int num : new_digits)
        {
            std::cout << num<<"\n";
        }*/

        std::cout << "\n";
        return new_digits;
    }
};

int main(int argc, char const *argv[])
{
    Solution solution;
    vector<int> num = {7,2,8,5,0,9,1,2,9,5,3,6,6,7,3,2,8,4,3,7,9,5,7,7,4,7,4,9,4,7,0,1,1,1,7,4,0,0,6};
    num = solution.plusOne(num);

    for (int n : num)
    {
        cout << n << " ";
    }
    return 0;
}
