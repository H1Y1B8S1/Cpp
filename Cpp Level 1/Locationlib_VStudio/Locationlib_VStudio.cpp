#include <iostream>  // Include necessary header file for input/output operations
#include "Locationlib.h"  // Include your custom header file

// Define a constant for enemy view radius
constexpr float enemy_view_radius_meter = 5;

// Main function where the program execution starts
int main()
{
    // Define the locations of two enemies as 3D points using std::array
    std::array<float, 3> enemy1_location = { 2, 2, 0 };
    std::array<float, 3> enemy2_location = { 2, 4, 0 };

    // Calculate the distance between two enemies using the distance function from Locationlib
    float enemy_distance = sid::locationlib::distance(enemy1_location, enemy2_location);

    // Calculate the distance of enemy1 from the origin (0, 0, 0) using the distance function
    float distance_from_center = sid::locationlib::distance(enemy1_location);

    // Use the circumference function from Locationlib to calculate the view circumference for the enemy
    using sid::locationlib::circumference;
    const float view_circumference_for_enemy = circumference(enemy_view_radius_meter);

    // Calculate the total walking distance based on a sequence of 3D points using total_walking_distance function
    const float total_distance = sid::locationlib::total_walking_distance({ enemy1_location,
                                                                      {2, 3, 0}, // y += 1
                                                                      {2, 3, 3}, // z += 3
                                                                      {5, 3, 3}, // x += 3
                                                                      {8, 3, 3}, // x += 3
                                                                      {8, 3, 2}, // z -= 1
                                                                      {2, 3, 2}, // x -= 6
                                                                      {2, 3, 1}, // z -= 1
                                                                      {2, 3, 0}, // z -= 1
                                                                      enemy2_location });

    // Output the calculated distances and circumferences
    std::cout << "The two enemies are " << enemy_distance << "m apart and can see for a circumference of "
        << view_circumference_for_enemy << "m. To go from one to the other they need to walk "
        << total_distance << "m.";
}
