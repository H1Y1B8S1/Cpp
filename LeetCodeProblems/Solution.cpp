#include "Solution.h"

#include <algorithm>
#include <cmath>

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
	auto ptr_buy = prices.begin();
	auto ptr_sell = std::next(ptr_buy);

	int buy = *ptr_buy, sell = *ptr_sell;


	for (int i = 1; i < prices.size(); ++i)
	{
		
	}


	std::cout << *ptr_buy << " ";
	std::cout << *ptr_sell << " ";
	return sell - buy;
}

//169
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
