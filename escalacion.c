#include "raylib.h"

int main(void) {
    InitWindow(800, 600, "2. Escalacion en Raylib");
    SetTargetFPS(60);

    float escala = 1.0f;
    float velocidadEscala = 0.01f;

    while (!WindowShouldClose()) {

        escala += velocidadEscala;
        if (escala > 1.8f || escala < 0.5f) {
            velocidadEscala *= -1; 
        }
        BeginDrawing();
            ClearBackground(RAYWHITE);

            DrawText("Escalacion (cambio de tamano)", 20, 20, 20, DARKGRAY);

            float radioBase = 40.0f;
            DrawCircle(200, 300, radioBase * escala, RED);

            float anchoBase = 100.0f;
            float altoBase = 60.0f;
            float nuevoAncho = anchoBase * escala;
            float nuevoAlto = altoBase * escala;
            DrawRectangle(400 - (nuevoAncho / 2), 300 - (nuevoAlto / 2), nuevoAncho, nuevoAlto, BLUE);

            Vector2 centroTriangulo = { 650, 300 };
            Vector2 p1 = { centroTriangulo.x, centroTriangulo.y - (50 * escala) };
            Vector2 p2 = { centroTriangulo.x - (50 * escala), centroTriangulo.y + (50 * escala) };
            Vector2 p3 = { centroTriangulo.x + (50 * escala), centroTriangulo.y + (50 * escala) };
            DrawTriangle(p1, p2, p3, GREEN);

        EndDrawing();
    }
    CloseWindow();
    return 0;
}