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

;