#include "Solution.h"
#include <cmath>

std::vector<int> solution::plus_one_66(std::vector<int>& digits)
{
	double temp = 0;
	double mul = pow(10, digits.size()-1);
	std::cout << digits.size() << "\n";

	for (const int num : digits)
	{
		temp += num * mul; 
		mul = mul / 10;

		std::cout << temp << "\n";
		std::cout << mul << "\n";
	}
	temp++;
	int number = temp;
	std::cout << "number: " << number<<"\n";
	/*
	 tmep = 1231
	 1.231 = 1
	 temp-1000 = 231
	 231/100 = 2.31
	 temp-200 = 31 = 3
	 temp-30 = 1


	number = 9000

	 */
	int count = 0;

	while (temp != 0)
	{
		(temp) /= 10;
		count++;
		temp = std::round(temp);
		std::cout << temp << "\n";
		if (temp <= 1)
			break;
	}
	std::cout << count << "\n"; 

	double div = pow(10, count - 1);
	std::vector<int> num;

	for (int i = 0; i < count; i++)
	{
		num.push_back(std::round(number / div));
		number = number - div * num[i];
		div /= 10;
	}

	for (int nm : num)
	{
		std::cout << nm << " ";
	}


	return num;
}
