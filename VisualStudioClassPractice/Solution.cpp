#include "Solution.h"
#include <cmath>

std::vector<int> solution::plus_one_66(std::vector<int>& digits)
{
	int n = digits.size();

	// Add one to the last digit
	digits[n - 1]++;

	// Handle carry-over if needed
	for (int i = n - 1; i > 0; --i) {
		if (digits[i] > 9) {
			digits[i] %= 10;
			digits[i - 1]++;
		}
	}

	// Check if the first digit needs a carry-over
	if (digits[0] > 9) {
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

void solution::move_zeroes(std::vector<int>& nums)
{
	int countZeroes = 0;

	// Deleting all 0's and counting their occurrences
	for (auto it = nums.begin(); it != nums.end();) {
		if (*it == 0) {
			it = nums.erase(it); // Deleting the zero element--> ptr moving to next ele.
			/*removes the element that it points to from the vector nums.
			 The returned iterator it is updated to point to the next
			 element in the vector after the erased element.*/
			countZeroes++;       // Counting the number of erased zeroes
		}
		else {
			++it;
		}
	}

	// Adding the counted 0's at the end
	while (countZeroes-- > 0) {
		nums.push_back(0); // Appending zeroes at the end
	}
}

;