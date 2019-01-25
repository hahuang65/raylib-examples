#include <stdlib.h>
#include "raylib.h"

int main()
{
  int screenWidth = 1920;
  int screenHeight = 1080;

  InitWindow(screenWidth, screenHeight, "raylib - move ball with mouse");

  SetTargetFPS(60);

  Color colors[] = { DARKBLUE, LIME, PURPLE, GOLD, ORANGE };
  int colorsCount = sizeof(colors) / sizeof(colors[0]);

  Vector2 ballPosition = { -100.0f, -100.0f };
  Color ballColor = colors[rand() % colorsCount];

  while (!WindowShouldClose())
  {
    ballPosition = GetMousePosition();
    if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
    {
      ballColor = colors[rand() % colorsCount];
    }

    BeginDrawing();
      ClearBackground(RAYWHITE);
      DrawText("Move the ball with the mouse", 10, 10, 50, DARKGRAY);
      DrawText("Click to change the ball color", 10, 60, 50, DARKGRAY);
      DrawCircleV(ballPosition, 100, ballColor);
    EndDrawing();
  }

  CloseWindow();

  return 0;
}
