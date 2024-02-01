#ifndef SOLUTION_H
#define SOLUTION_H
#pragma once

#include <iostream>
#include <vector>
#include <string>


class solution
{
public:
	//01
	static std::vector<int> two_sum_01(std::vector<int>& nums, int target);

	//14
	static std::string longest_common_prefix_14(std::vector<std::string>& strs);

	//28
	static int str_str_28(std::string haystack, std::string needle);

	//Q66 Plus One.
	static std::vector<int> plus_one_66(std::vector<int>& digits);

	//58
	static int length_of_last_word_58(std::string s);

	//88 Merge Sorted Array
	static void merge_88(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n);

	//121
	static int max_profit_121(std::vector<int>& prices);

	//125
	static bool is_palindrome_125(std::string s);

	//150
	static bool is_subsequence_150(std::string s, std::string t);

	//169 
	//Boyer-Moore's Voting Algorithm
	static int majority_element_167(std::vector<int>& nums);

	//202
	static bool is_happy_202(int n);

	//205
	static bool is_isomorphic_205(std::string s, std::string t);

	//242 
	static bool is_anagram_242(std::string s, std::string t);

	//283
	static void move_zeroes_283(std::vector<int>& nums);

	//290
	static bool word_pattern_290(std::string pattern, std::string s);

	//383
	static bool can_construct_383(std::string ransomNote, std::string magazine);

	//931
	static int min_falling_path_sum_931(std::vector<std::vector<int>>& matrix);
};


#endif
