#ifndef SID_LOCATIONLIB_H
#define SID_LOCATIONLIB_H

// Include necessary header files
#include <array>

// Start of namespace sid
namespace sid
{
	// Nested namespace for location-related functions
	namespace locationlib
	{
		// Function declarations for distance calculations
		float distance(float a, float b); // Calculate distance between two float values
		int distance(int a, int b); // Calculate distance between two int values
		float distance(std::array<float, 3> a, std::array<float, 3> b = {0, 0, 0});
		// Calculate distance between two 3D points

		// Function declaration for circumference calculation
		float circumference(float radius); // Calculate circumference of a circle given its radius

		// Function declaration for total walking distance calculation
		float total_walking_distance(const std::array<std::array<float, 3>, 10>& location);
		// Calculate total walking distance between 10 3D points

	} 
} 

// End of header guard
#endif
