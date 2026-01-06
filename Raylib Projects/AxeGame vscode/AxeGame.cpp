#include <raylib.h>

int main()
{

    // Window Dimensions
    int width{1920}, height{1080};
    InitWindow(width, height, "Axe Game");

    // Circle Coordinates
    int circleX{width/2}, circleY{height/2};
    int circleRadius{25};

    // Circle edges
    int circleLeft{circleX - circleRadius};
    int circleRight{circleX + circleRadius};
    int circleUp{circleY - circleRadius};
    int circledown{circleY + circleRadius};

    // Axe Coordinates
    int axeLength{50};
    int axeX{width/2 - axeLength/2}, axeY{0};
    // Axe edges
    int axeLeft{axeX};
    int axeRight{axeX + axeLength};
    int axeUp{axeY};
    int axeDown{axeY + axeLength};


    int direction{2};

    SetTargetFPS(120);
    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);

        // Game Logic Begins 

        DrawCircle(circleX,circleY,circleRadius,RED);
        DrawRectangle(axeX,axeY,axeLength,axeLength,BLUE);

        if((axeY > height) || (axeY < 0))
            direction = -direction;

        axeY+=direction;


        if(IsKeyDown(KEY_D) && circleX <= width - circleRadius)
            circleX+=direction;
        if(IsKeyDown(KEY_A) && circleX >= circleRadius)    
            circleX-=direction;
        if(IsKeyDown(KEY_W) && circleY >= circleRadius)
            circleY-=direction;
        if(IsKeyDown(KEY_S) && circleY <= height- circleRadius)
            circleY+=direction;
        


        // Game Logic Ends
        EndDrawing();
    }
    
    return 0;
}