#include <iostream>
#include <raylib.h>


int main() {

    InitWindow(1366,758,NULL);


    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RED);

        DrawText("Hello RayLib!",10,20,500,GREEN);

        EndDrawing();
    }
    CloseWindow();

    return 0;
}