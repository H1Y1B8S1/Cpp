#include <raylib.h>
#include <iostream>

int main()
{
	// Window Parameters.
	int width{ 1080 }, height{ 720 };
	InitWindow(width, height, "RUNner");

	SetTargetFPS(120);
	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(WHITE);

		// Game Logic Ends
		EndDrawing();
	}

}

