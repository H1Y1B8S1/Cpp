#include <complex>

#include "locationlib.h"

constexpr float PI = 3.14f;

float sid::locationlib::distance(float a, float b)
{
	return b - a;
}

int sid::locationlib::distance(int a, int b)
{
	return b - a;
}

float sid::locationlib::distance(std::array<float, 3> a, std::array<float, 3> b)
{
	// distance = square root of ( (x2-x1)^2 + (y2-y1)^2 + (z2-z1)^2 )
	// std::pow(x, 2) == x^2

	return std::sqrt(std::pow(b[0] - a[0], 2) + std::pow(b[1] - a[1], 2) + std::pow(b[2] - a[2], 2));
}

float sid::locationlib::circumference(const float radius)
{
	return 2 * PI * radius;
}

float sid::locationlib::total_walking_distance(const std::array<std::array<float, 3>, 10>& location)
{
	float distance_walked_so_far = 0;
	for(int current_location = 1;current_location<10;current_location++)
	{
		int previous_location = current_location - 1;
		float current_distance = distance(location[previous_location], location[current_location]);
		distance_walked_so_far += current_distance;
	}

	return distance_walked_so_far;
}
