/*2469.
Convert the Temperature
Kelvin = Celsius + 273.15
Fahrenheit = Celsius * 1.80 + 32.00
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<double> convertTemperature(double celsius)
    {
        return {celsius + 273.15000, celsius * 1.80000 + 32.00000};
    }
};

int main()
{
    Solution sol;
    double celsius = 122.11;
    vector<double> result = sol.convertTemperature(celsius);

    std::cout << result[0]<<" and " <<result[1]<< endl;
    return 0;
}
