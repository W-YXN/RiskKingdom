#include "pch.h"
#include "headers.h"


void Tools::gotoxy(short x, short y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void Tools::hideMouse()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(handle, &CursorInfo);//GetConsoleInfo
	CursorInfo.bVisible = false; //Hide
	SetConsoleCursorInfo(handle, &CursorInfo);//SetStatus
}

int Tools::Rand(int x)
{
	srand( (int)time(0) + rand() * (rand()%107) / (rand()/107) );//Seed
	int tmp = rand() % x;//GetRandomNumber(0 to x)
	return tmp;//return
}

Tools::Tools() {
	//Nothing to do.
}
Tools::~Tools() {
	//Nothing to do.
}