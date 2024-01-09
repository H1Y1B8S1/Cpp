#include <vector>
#include <iostream>
#include <cmath>

using namespace std;
class Solution
{

public:
    std::vector<int> plusOne(std::vector<int> &digits)
    {

        double temp = 0;
        double mul = pow(10, digits.size() - 1);

        for (const int num : digits)
        {
            temp += num * mul;
            mul = mul / 10;
        }
        temp++;
        int number = temp;

        int count = 0;
        temp = static_cast<int>(temp);
        while (temp != 0)
        {
            (temp) /= 10;
            ++count;
            temp = std::round(temp);
            if (temp <= 1)
                break;
        }

        double div = pow(10, count - 1);
        std::vector<int> num;

        for (int i = 0; i < count; i++)
        {
            num.push_back(std::round(number / div));
            number = number - div * num[i];
            div /= 10;
        }

        return num;
    }
};

int main(int argc, char const *argv[])
{
    Solution solution;
    vector<int> num = {8, 9, 9, 9};
    num = solution.plusOne(num);

    for (int n : num)
    {
        cout << n << " ";
    }
    return 0;
}
