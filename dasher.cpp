#include "raylib.h" // Include raylib.h 

// Create Main Function
int main() 
{

    // Game Window Dimensions in struct 
    struct {
    const int width = 512;                // Window Width
    const int height = 380;               // Window Height
    Color background = WHITE;             // Background Color
    } gameWindow;

    // Create FPS variable 
    const int FPS = 60;

    /*                              Velocity notes: 
        Velocity in (pixels/frame)
        - For 60 FPS and 10 velocity: 10 (p/f) x 60 (f/s) = 600 (p/s)
    */ 

    // Initialize Game Window 
    InitWindow(gameWindow.width, gameWindow.height, "Dapper Dasher");
    
    // Rectangle Structure 
    const int width{50}; 
    const int height{80};

    int posY{gameWindow.height - height};
    int velocity{0};

    // Set Target FPS 
    SetTargetFPS(FPS);

    
    // Create While Loop to keep Window open 
    while (!WindowShouldClose())
    {
        BeginDrawing();                             // Begin Drawing
        ClearBackground(gameWindow.background);     // Create White background

        if ( IsKeyPressed(KEY_SPACE) )
        {
            velocity -= 10;
        }

        posY += velocity;


        DrawRectangle(gameWindow.width/2, posY, width, height, BLUE);

        EndDrawing();                               // End Drawing
    }
    CloseWindow();      
}