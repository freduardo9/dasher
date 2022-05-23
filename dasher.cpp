#include "raylib.h" // Include raylib.h 

// Create Main 
int main() 
{

    // Game Window Dimensions in struct 
    struct {
    int width = 350;            // Window Width
    int height = 200;               // Window Height
    Color background = WHITE;   // Background Color
    } gameWindow;

    // Create FPS variable 
    const int FPS = 60;

    // Initialize Game Window 
    InitWindow(gameWindow.width, gameWindow.height, "Dapper Dasher");
    
    // Set Target FPS 
    SetTargetFPS(FPS);

    
    // Create While Loop to keep Window open 
    while (!WindowShouldClose())
    {
        BeginDrawing();                             // Begin Drawing
        ClearBackground(gameWindow.background);                // Create White background
        EndDrawing();                               // End Drawing
    }

}