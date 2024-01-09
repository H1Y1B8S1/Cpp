#include <iostream>

#include "Solution.h"

int main(int argc, char* argv[])
{
	// main class to solve all problem

	std::vector<int> digits = { 9 };
	std::vector<int> digits1 = { 0 };
	std::vector<int> digits2 = { 9,8,7,6,5,4,3,2,1,0 };
	std::vector<int> digits3 = { 8,9,9,9 };

	solution::plus_one_66(digits1);
	solution::plus_one_66(digits);
	solution::plus_one_66(digits2);


	return 0;
}


