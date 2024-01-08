#include "Solution.h"
#include <cmath>

std::vector<int> solution::plus_one_66(std::vector<int>& digits)
{
	double temp = 0;
	for (const int num : digits)
	{
		const double mul = pow(10,digits.size());

		std::cout << num << "\n";
		std::cout << mul << "\n";
		temp += num * mul;
	}
	std::vector<int> num = { 1,2,3 };

	return num;
}
