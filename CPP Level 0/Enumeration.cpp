#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    enum week
    {
        Monday,         // default value = 0
        Tuesday,        // = 1
        Wednesday = 10, // default value was 2 ,but changed it to = 10.
        Thursday,       // =11
        Friday,         // =12
        Saturday = 45,  // =45
        Sunday          // =46
    };

    week day1, day2, day3;
    day1 = Friday;    // 12
    day2 = Sunday;    // 46
    day3 = Wednesday; // 10

    cout << "Total Sum : " << day1 + day2 + day3 << endl; //68

    return 0;
}
