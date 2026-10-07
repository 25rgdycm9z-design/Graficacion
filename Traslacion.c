#include "raylib.h"

int main(void) {
    InitWindow(800, 600, "1. Traslacion en Raylib");
    SetTargetFPS(60);

    float posX = 100.0f;
    float velocidad = 3.0f;

    while (!WindowShouldClose()) {

        posX += velocidad;
        if (posX > 700 || posX < 100) {
            velocidad *= -1; 
        }
        BeginDrawing();
            ClearBackground(RAYWHITE);

            DrawText("Traslacion (movimiento en X)", 20, 20, 20, DARKGRAY);

            DrawCircle((int)posX, 150, 40, RED);

            DrawRectangle((int)posX + 50, 270, 100, 60, BLUE);

            Vector2 p1 = { posX + 100, 420 };
            Vector2 p2 = { posX + 50,  500 };
            Vector2 p3 = { posX + 150, 500 };
            DrawTriangle(p1, p2, p3, GREEN);

        EndDrawing();
    }
    CloseWindow();
    return 0;
}