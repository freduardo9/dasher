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

    // Initialize Game Window 
    InitWindow(gameWindow.width, gameWindow.height, "Dapper Dasher");
    
    // Set Target FPS 
    SetTargetFPS(FPS);

    
    // Create While Loop to keep Window open 
    while (!WindowShouldClose())
    {
        BeginDrawing();                             // Begin Drawing
        ClearBackground(gameWindow.background);     // Create White background
        EndDrawing();                               // End Drawing
    }
    CloseWindow();
}