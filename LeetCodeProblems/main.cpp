#include <iostream>

#include "Solution.h"

int main(int argc, char* argv[])
{
	// main class to perform all problem

	std::vector<int> arr1 = {2, 1, 3},
	                 arr2 = {6, 5, 4},
	                 arr3 = {6, 5, 4};

	std::vector<std::string> arr4 = {"flower", "flow", "flight"},
	                         arr5 = {"dog", "racecar", "car"};

	std::vector<std::vector<int>> matrix = {
		                              {2, 1, 3},
		                              {6, 5, 4},
		                              {7, 8, 9}
	                              },
	                              matrix2 = {
		                              {-19, 57},
		                              {-40, -5}
	                              };


	std::string string1 = "anagram",
	            string2 = "nagaram",
	            string3 = "0P";

	//int number = solution::min_falling_path_sum_931(matrix);
	//std::string text = solution::longest_common_prefix_14(arr4);
	const bool flag = solution::is_anagram_242(string1, string2);

	std::cout << "\n" << flag << "\n";

	return 0;
}
