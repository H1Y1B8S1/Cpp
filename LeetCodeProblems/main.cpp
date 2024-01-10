#include <iostream>

#include "Solution.h"

int main(int argc, char* argv[])
{
	// main class to solve all problem

	std::vector<int> arr1 = { 1,2,3,0,0,0 };
	std::vector<int> arr2 = { 2,5,6, };

	int m, n;

	solution::merge_88(arr1, m = 3, arr2, n = 3);

	for (int num : arr1) {
		std::cout << num << " ";
	}

	return 0;
}


