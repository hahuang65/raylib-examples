#include "raylib.h"

int main()
{
  int screenWidth = 1920;
  int screenHeight = 1080;

  InitWindow(screenWidth, screenHeight, "raylib - move ball with keyboard");

  float ballX = (float)screenWidth/2;
  float ballY = (float)screenHeight/2;

  SetTargetFPS(60);

  while (!WindowShouldClose())
  {
    if (IsKeyDown(KEY_RIGHT)) ballX += 2.0f;
    if (IsKeyDown(KEY_LEFT)) ballX -= 2.0f;
    if (IsKeyDown(KEY_UP)) ballY -= 2.0f;
    if (IsKeyDown(KEY_DOWN)) ballY += 2.0f;

    BeginDrawing();

      ClearBackground(RAYWHITE);
      DrawText("Move the ball with arrow keys", 10, 10, 50, DARKGRAY);
      DrawCircle(ballX, ballY, 100, LIME);

    EndDrawing();
  }

  CloseWindow();

  return 0;
}
