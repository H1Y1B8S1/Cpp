#include "Solution.h"

#include <algorithm>
#include <cmath>
#include <map>
#include <unordered_map>
#include <sstream>

std::vector<int> solution::two_sum_01(std::vector<int>& nums, int target)
{
	std::vector<int> result;

	return result;
}

//14
std::string solution::longest_common_prefix_14(std::vector<std::string>& strs)
{
	if (strs.empty())
	{
		return ""; // Handle the case when the vector is empty
	}

	// Take the first string as the initial common prefix
	std::string common_prefix = strs[0];

	for (int i = 1; i < strs.size(); ++i)
	{
		int j = 0;
		// Compare characters until the end of the common prefix or the end of the current string
		while (j < common_prefix.length() && j < strs[i].length() && common_prefix[j] == strs[i][j])
		{
			++j;
		}

		// Update the common prefix with the matching characters
		common_prefix.erase(j);

		// If the common prefix becomes empty, break as there is no further common prefix
		if (common_prefix.empty())
		{
			break;
		}
	}

	return common_prefix;
}

//28
int solution::str_str_28(std::string haystack, std::string needle)
{
	int m = haystack.size();
	int n = needle.size();

	for (int i = 0; i <= m - n; ++i)
	{
		int j;
		for (j = 0; j < n; ++j)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}

		if (j == n)
		{
			return i;
		}
	}

	return -1;
}

//66
std::vector<int> solution::plus_one_66(std::vector<int>& digits)
{
	int n = digits.size();

	// Add one to the last digit
	digits[n - 1]++;

	// Handle carry-over if needed
	for (int i = n - 1; i > 0; --i)
	{
		if (digits[i] > 9)
		{
			digits[i] %= 10;
			digits[i - 1]++;
		}
	}

	// Check if the first digit needs a carry-over
	if (digits[0] > 9)
	{
		digits[0] %= 10;
		digits.insert(digits.begin(), 1); // Add a new leading digit '1'
	}


	for (int num : digits)
	{
		std::cout << num << " ";
	}

	std::cout << "\n";
	return digits;
}

//58
int solution::length_of_last_word_58(std::string s)
{
	auto ptr1 = s.rbegin();
	int size = 0;

	// Skip leading spaces
	while (ptr1 != s.rend() && *ptr1 == ' ')
	{
		++ptr1;
	}

	// Count the characters of the last word
	while (ptr1 != s.rend() && *ptr1 != ' ')
	{
		++size;
		++ptr1;
	}

	return size;
}

//88
void solution::merge_88(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n)
{
	// going reverse while doing merging and sorting together.

	int ptr1 = m - 1;
	int ptr2 = n - 1;
	int ptr = m + n - 1;

	while (ptr1 >= 0 && ptr2 >= 0)
	{
		if (nums1[ptr1] > nums2[ptr2])
			nums1[ptr--] = nums1[ptr1--];
		else
			nums1[ptr--] = nums2[ptr2--];
	}


	while (ptr2 >= 0)
	{
		nums1[ptr--] = nums2[ptr2--];
	}
}

//121
int solution::max_profit_121(std::vector<int>& prices)
{
	if (prices.size() < 2)
	{
		return 0; // Not enough prices to make a profit
	}

	int minPrice = prices[0];
	int maxProfit = 0;

	for (int i = 1; i < prices.size(); ++i)
	{
		minPrice = std::min(minPrice, prices[i]);
		maxProfit = std::max(maxProfit, prices[i] - minPrice);
	}

	return maxProfit;
	//#########################################################################
	//if (prices.size() < 2) {
	//	return 0;  // Not enough prices to make a profit
	//}

	//auto ptr_buy = prices.begin();
	//auto ptr_sell = std::next(ptr_buy);

	//int buy = *ptr_buy, sell = *ptr_sell;

	//for (int i = 1; i < prices.size(); ++i) {
	//	if (buy > prices[i]) {
	//		buy = prices[i];
	//		ptr_buy = prices.begin() + i;

	//		// Check if there is a next element after ptr_buy
	//		if (std::next(ptr_buy) != prices.end()) {
	//			ptr_sell = std::next(ptr_buy);
	//			sell = *ptr_sell;
	//		}
	//	}
	//	else if (sell < *ptr_sell) {
	//		sell = *ptr_sell;
	//	}

	//	// Increment ptr_sell only if it's not at the end
	//	if (ptr_sell != std::prev(prices.end())) {
	//		++ptr_sell;
	//	}
	//}
}

//125
bool solution::is_palindrome_125(std::string s)
{
	for (char& c : s)
	{
		c = tolower(c);
	}

	// Step 2: Remove non-alphanumeric characters
	s.erase(std::remove_if(s.begin(), s.end(), [](char c)
	{
		return !isalnum(c);
	}), s.end());

	// Step 3: Check if it's a palindrome
	int left = 0;
	int right = s.length() - 1;

	while (left < right)
	{
		if (s[left] != s[right])
		{
			return false;
		}
		left++;
		right--;
	}

	return true;


	//std::string lowercaseString;
	//// Construct the lowercase string without non-alphabetic characters
	//for (char character : s) {
	//	// Check if the character is an uppercase letter
	//	if (character >= 'A' && character <= 'Z') {
	//		// Convert to lowercase by adding the ASCII offset
	//		lowercaseString += character + ('a' - 'A');
	//	}
	//	// Check if the character is a lowercase letter
	//	else if (character >= 'a' && character <= 'z') {
	//		lowercaseString += character;
	//	}
	//	// Ignore other characters (non-alphabetic)
	//}
	//bool isPalindrome = true;
	//int length = lowercaseString.length();
	//// Updated palindrome checking logic
	//if (length > 1) {
	//	for (int i = 0; i < length / 2; ++i) {
	//		if (lowercaseString[i] != lowercaseString[length - i - 1]) {
	//			isPalindrome = false;
	//			break;
	//		}
	//	}
	//}
}

//150
bool solution::is_subsequence_150(std::string s, std::string t)
{
	int sp = 0;
	if (s.length() == 0 && t.length() == 0)
		return true;

	for (char c : t)
	{
		if (c == s[sp])
		{
			sp++;
		}
		if (s[sp] == '\0')
			return true;
	}

	return false;
}

//169-Boyer-Moore's voting Algo.
int solution::majority_element_167(std::vector<int>& nums)
{
	int number = NULL;
	int count = 0;

	for (int n : nums)
	{
		if (count == 0)
		{
			number = n;
			count = 1;
		}
		else if (number == n)
		{
			count++;
		}
		else
		{
			count--;
		}
	}

	// std::cout << count<<" ";
	return number;
}

//205
bool solution::is_isomorphic_205(std::string s, std::string t)
{
	if (s.size() != t.size())
	{
		return false;
	}

	std::unordered_map<char, char> mapping;
	std::vector<char> mappedCharacters;

	for (std::size_t i = 0; i < s.size(); ++i)
	{
		if (mapping.find(s[i]) == mapping.end())
		{
			// Character s[i] is not mapped yet
			if (std::find(mappedCharacters.begin(), mappedCharacters.end(), t[i]) == mappedCharacters.end())
			{
				// t[i] is not used for mapping, so we can map s[i] to t[i]
				mappedCharacters.push_back(t[i]);
				mapping[s[i]] = t[i];
			}
			else
			{
				// t[i] is already used for mapping, return false
				return false;
			}
		}
		else
		{
			// Character s[i] is already mapped
			if (mapping[s[i]] != t[i])
			{
				// Mapping does not match, return false
				return false;
			}
		}
	}

	return true;
}

//242
bool solution::is_anagram_242(std::string s, std::string t)
{
	std::vector<int> mapping(26, 0);

	for (const char c : s)
	{
		mapping[c - 97]++;
	}

	if (t.size() == s.size())
	{
		for (const char c : t)
		{
			if (mapping[c - 97] == 0)
				return false;
			mapping[c - 97]--;
		}
		return true;
	}


	return false;
}

//263
void solution::move_zeroes_283(std::vector<int>& nums)
{
	int countZeroes = 0;

	// Deleting all 0's and counting their occurrences
	for (auto it = nums.begin(); it != nums.end();)
	{
		if (*it == 0)
		{
			it = nums.erase(it); // Deleting the zero element--> ptr moving to next ele.
			/*removes the element that it points to from the vector nums.
			 The returned iterator it is updated to point to the next
			 element in the vector after the erased element.*/
			countZeroes++; // Counting the number of erased zeroes
		}
		else
		{
			++it;
		}
	}

	// Adding the counted 0's at the end
	while (countZeroes-- > 0)
	{
		nums.push_back(0); // Appending zeroes at the end
	}
}

//290
bool solution::word_pattern_290(std::string pattern, std::string s)
{
	std::unordered_map<char, std::string> patternToWord;
	std::unordered_map<std::string, char> wordToPattern;

	std::istringstream iss(s);
	std::vector<std::string> words;
	std::string word;

	// Split the input string into words
	while (iss >> word)
	{
		words.push_back(word);
	}

	// Check if the number of words matches the pattern lengtha
	if (pattern.length() != words.size())
	{
		return false;
	}

	// Iterate through each character and word, updating the hash maps
	for (int i = 0; i < pattern.length(); ++i)
	{
		char currentChar = pattern[i];
		std::string currentWord = words[i];

		// Check if the current character is already mapped to a different word
		if (patternToWord.find(currentChar) != patternToWord.end() && patternToWord[currentChar] != currentWord)
		{
			return false;
		}

		// Check if the current word is already mapped to a different character
		if (wordToPattern.find(currentWord) != wordToPattern.end() && wordToPattern[currentWord] != currentChar)
		{
			return false;
		}

		// Update the hash maps
		patternToWord[currentChar] = currentWord;
		wordToPattern[currentWord] = currentChar;
	}

	return true;
}

//383
bool solution::can_construct_383(std::string ransomNote, std::string magazine)
{
	//97 - 122
	std::vector<int> hash_map(26, 0);


	for (char c : magazine)
	{
		hash_map[c - 97]++;
	}

	for (char c : ransomNote)
	{
		if (hash_map[c - 97] != 0)
		{
			hash_map[c - 97]--;
		}
		else
		{
			return false;
		}
	}

	return true;
}

//931
int solution::min_falling_path_sum_931(std::vector<std::vector<int>>& matrix)
{
	int rows = matrix.size();
	int cols = matrix[0].size();

	// Start from the second-to-last row and update the matrix with minimum falling path sums
	for (int i = rows - 2; i >= 0; --i)
	{
		for (int j = 0; j < cols; ++j)
		{
			int best_next_move = matrix[i + 1][j]; // Initialize with the value directly below

			if (j > 0)
			{
				best_next_move = std::min(best_next_move, matrix[i + 1][j - 1]); // Check the left-bottom neighbor
			}

			if (j < cols - 1)
			{
				best_next_move = std::min(best_next_move, matrix[i + 1][j + 1]); // Check the right-bottom neighbor
			}

			matrix[i][j] += best_next_move; // Update the current cell with the minimum falling path sum
		}
	}

	// The minimum falling path sum will be the minimum value in the first row
	return *std::min_element(matrix[0].begin(), matrix[0].end());
}
