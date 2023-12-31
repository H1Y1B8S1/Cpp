#ifndef SOLUTION_H
#define SOLUTION_H

#pragma once
#include <iostream>
#include <vector>
#include <string>



class solution
{
public:
	//Q66 Plus One.
	static std::vector<int> plus_one_66(std::vector<int>& digits);

	//Q283
	static void move_zeroes(std::vector<int>& nums);

	//88 Merge Sorted Array
	static void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n);
};



#endif
