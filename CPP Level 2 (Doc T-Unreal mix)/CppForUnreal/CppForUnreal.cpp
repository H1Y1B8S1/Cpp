#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>


//java dot comment
/**
 * @brief 
 * @return 
 */

int main()
{
	constexpr int SecondsPerMinutes{60};
	int TotalSecondPlayed{100};
	std::cout << TotalSecondPlayed / SecondsPerMinutes << " Minutes and " << TotalSecondPlayed % SecondsPerMinutes <<" Seconds\n";
	// float type cast
	std::cout << static_cast<float>(TotalSecondPlayed) / SecondsPerMinutes << " Minutes\n";

	float Angle{45};
	Angle = Angle * M_PI / 180;
	float Cosine = cosf(Angle);
	std::cout << "Cosine of 45 degrees: " << Cosine << "\n";
}
