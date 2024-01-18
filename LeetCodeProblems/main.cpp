#include <iostream>

#include "Solution.h"

int main(int argc, char* argv[])
{
	// main class to perform all problem

	std::vector<int> arr1 = {7, 6, 4, 3, 1},
	                 arr2 = {7, 1, 5, 3, 6, 4},
	                 arr3 = {3, 3, 4, 7, 1, 5, 3, 6, 4, 7, 6, 4, 3, 1};

	std::vector<std::string> arr4 = {"flower", "flow", "flight"},
	                         arr5 = {"dog", "racecar", "car"};

	std::string string1 = "axc",
		string2 = "ahbgdc",
		string3 = "0P";

	//int number = solution::str_str_28(string1,string2);
	//std::string text = solution::longest_common_prefix_14(arr4);
	const bool flag = solution::is_subsequence_150(string1,string2);


	std::cout << flag << "\n";


	/*std::cout << " \n";
	for (int num : arr1)
	{
		std::cout << num << " ";
	}*/
	std::cout << " \n";

	return 0;
}
