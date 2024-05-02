#ifndef SID_LOCATIONLIB_H
#define SID_LOCATIONLIB_H

#pragma once
#include <array>


namespace sid
{
	namespace locationlib
	{
		float distance(float a, float b);
		int distance(int a, int b);
		float distance(std::array<float, 3> a, std::array<float, 3> b = {0, 0, 0});

		float circumference(float radius);

		float total_walking_distance(const std::array<std::array<float, 3>, 10>& location);
	}
}


#endif
