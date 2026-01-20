
#include <raylib.h>

int main()
{

    // Window Dimensions
    int width{ 1920 }, height{ 1080 };
    InitWindow(width, height, "Axe Game");

    // Circle Coordinates
    int circleX{ width / 2 }, circleY{ height / 2 };
    int circleRadius{ 25 };

    // Circle edges - cheack collision box arround it.
    int circleLeft{ circleX - circleRadius };
    int circleRight{ circleX + circleRadius };
    int circleUp{ circleY - circleRadius };
    int circledown{ circleY + circleRadius };

    // Axe Coordinates
    int axeLength{ 50 };
    int axeX{ width / 2 - axeLength / 2 }, axeY{ 0 };
    // Axe four edges
    int axeLeft{ axeX };
    int axeRight{ axeX + axeLength };
    int axeUp{ axeY };
    int axeDown{ axeY + axeLength };

    int movementDireaction{ 4 };
    int autoDirection{ 15 };

    bool collisionWithAxe{ false };

    SetTargetFPS(120);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);

         collisionWithAxe = CheckCollisionCircleRec(Vector2(circleX, circleY), circleRadius,Rectangle(axeX, axeY, axeLength, axeLength));

        if (collisionWithAxe)
            DrawText("Game Over!!", (width / 2) - 200, height / 2, 60, RED);

        else 
        {   // Game Logic Begins 

            DrawCircle(circleX, circleY, circleRadius, RED);
            DrawRectangle(axeX, axeY, axeLength, axeLength, BLUE);

            if ((axeY > height) || (axeY < 0))
                autoDirection = -autoDirection;

            axeY += autoDirection;

            if (IsKeyDown(KEY_D) && circleX <= width - circleRadius)
                circleX += movementDireaction;
            if (IsKeyDown(KEY_A) && circleX >= circleRadius)
                circleX -= movementDireaction;
            if (IsKeyDown(KEY_W) && circleY >= circleRadius)
                circleY -= movementDireaction;
            if (IsKeyDown(KEY_S) && circleY <= height - circleRadius)
                circleY += movementDireaction;
        }



        // Game Logic Ends
        EndDrawing();
    }

    return 0;
}