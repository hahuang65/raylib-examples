#include "raylib.h"

int main()
{
  int screenWidth = 800;
  int screenHeight = 600;

  InitWindow(screenWidth, screenHeight, "raylib - basic window");

  SetTargetFPS(60);

  while (!WindowShouldClose())
  {
    BeginDrawing();

      ClearBackground(RAYWHITE);
      DrawText("Congrats! You created your first window!", 75, 300, 32, SKYBLUE);

    EndDrawing();
  }

  CloseWindow();

  return 0;
}
