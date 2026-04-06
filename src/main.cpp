#include <iostream>
#include <raylib.h>

int main()
{
	SetConfigFlags(FLAG_WINDOW_RESIZABLE);
	InitWindow(1920, 1080, "Window test");

	while (!WindowShouldClose())
		{
		BeginDrawing();
		ClearBackground(BLACK);
		
		
		DrawRectangle(650, 650, 100, 100, PINK);
		DrawRectangle(700, 700, 100, 100, { 255, 0, 0, 150 });
		

		DrawText("Holy shit it's open", 600, 200, 40, RED);

		EndDrawing();
		}

	CloseWindow();

	return 0;
}