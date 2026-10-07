#include "raylib.h"

int main(void) {
    InitWindow(800, 600, "3. Rotacion en Raylib");
    SetTargetFPS(60);

    float angulo = 0.0f;

    while (!WindowShouldClose()) {

        angulo += 1.5f;

        BeginDrawing();
            ClearBackground(RAYWHITE);

            DrawText("Rotacion", 20, 20, 20, DARKGRAY);

            Vector2 centroCirculo = { 200, 300 };
            float radio = 40.0f;
            DrawCircleV(centroCirculo, radio, RED);

            DrawLinePro(centroCirculo, radio, angulo, BLACK);

            Rectangle rec = { 400, 300, 100, 60 };
            Vector2 origen = { 50, 30 };
            DrawRectanglePro(rec, origen, angulo, BLUE);

            Vector2 centroTriangulo = { 650, 300 };
            DrawPoly(centroTriangulo, 3, 50.0f, angulo, GREEN);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}