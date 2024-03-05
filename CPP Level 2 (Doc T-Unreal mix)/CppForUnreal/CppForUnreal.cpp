#include <iostream>

//java dot comment
/**
 * @brief 
 * @return 
 */

int main()
{
	const int SecondsPerMinutes{ 60 };
	int TotalSecondPlayed{ 100 };


	std::cout << TotalSecondPlayed / SecondsPerMinutes << " Minutes and " << TotalSecondPlayed % SecondsPerMinutes << " Seconds\n";
	// float type cast
	std::cout << static_cast<float>(TotalSecondPlayed)/SecondsPerMinutes<<" Minutes\n";
}
