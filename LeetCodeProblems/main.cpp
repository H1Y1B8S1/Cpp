#include <iostream>

#include "Solution.h"

int main(int argc, char* argv[])
{
	// main class to perform all problem

	std::vector<int> arr1 = {7, 6, 4, 3, 1},
	                 arr2 = {7, 1, 5, 3, 6, 4},
	                 arr3 = {3, 3, 4, 7, 1, 5, 3, 6, 4, 7, 6, 4, 3, 1};

	std::string string1 = "   fly me   to   the moon  ",
	            string2 = "a ";

	int number = solution::length_of_last_word_58(string2);


	std::cout << number << "\n";


	std::cout << " \n";
	/*for (int num : arr1)
	{
		std::cout << num << " ";
	}*/
	std::cout << " \n";

	return 0;
}
