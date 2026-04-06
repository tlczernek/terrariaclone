#include <raylib.h>
#include "gameMain.h"

bool initGame()
{
	return true;
}

bool updateGame()
{
	DrawRectangle(650, 650, 100, 100, PINK);
	DrawRectangle(700, 700, 100, 100, { 255, 0, 0, 150 });

	DrawText("Holy shit it's open", 600, 200, 40, RED);

	return true;
}

void closeGame()
{
	
}