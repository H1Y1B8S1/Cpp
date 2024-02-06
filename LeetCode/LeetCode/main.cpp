#include <iostream>

#include "Solution.h"

int main(int argc, char* argv[])
{
	// main class to perform all problem

	int num1 = 2;

	std::vector<int> arr1 = { 0,1,2,4,5,7 },
	                 arr2 = { 0,2,3,4,6,8,9 },
	                 arr3 = { 3,2,95,4,-3 };

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
	//std::cout << "\n" << number << "\n";

	//std::string text = solution::longest_common_prefix_14(arr4);
	//std::cout << "\n" << text << "\n";

	/*const bool flag = solution::contains_nearby_duplicate_219(arr1,num1);
	std::cout << "\n" << flag << "\n";*/

	/*const std::vector<int> result = solution::two_sum_01(arr3, num1);
	std::cout << "[";
	for(const int i:result)
	{
		std::cout << i<<",";
	}
	std::cout << "]";*/

	const std::vector<std::string> str = solution::summary_ranges_228(arr1);
	std::cout << "[";
	for (const std::string s : str)
	{
		std::cout << s << ",";
	}
	std::cout << "]";

	return 0;
}
