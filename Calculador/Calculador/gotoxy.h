#pragma once
#include <windows.h>
void gotoxy
{
	HANDLE hStdout;
	COORD pos;
	pos.X = x - 1;
	pos.Y = y - 1;
	hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	if (hStdout == INVALID_HANDLE_VALUE)
		return;
	SetConsoleCursorPosition(hStdout, pos);
};

