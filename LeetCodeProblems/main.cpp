#include <iostream>

#include "Solution.h"

int main(int argc, char* argv[])
{
	// main class to solve all problem

	std::vector<int> nums = { 0, 1, 0, 3, 12 };
	std::vector<int> nums1 = { 0, 0, 1,};


	solution::move_zeroes(nums1);

	for (int n : nums1)
	{
		std::cout << n << " ";
	}
	return 0;
}


