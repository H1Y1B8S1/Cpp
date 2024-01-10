#include <iostream>

#include "Solution.h"

int main(int argc, char* argv[])
{
	// main class to solve all problem

	std::vector<int> arr1 = {2, 2, 2, 0, 0, 3, 3,};
	std::vector<int> arr2 = {1, 1, 1, 2, 2, 2, 2};
	std::vector<int> arr3 = {3, 3, 4};

	int number = solution::majority_element_167(arr1);
	std::cout << number << "\n";


	std::cout << " \n";
	/*for (int num : arr1)
	{
		std::cout << num << " ";
	}*/
	std::cout << " \n";

	return 0;
}
