#include "pch.h"
#pragma once
#include <iostream>
#include <Windows.h>
#include <ctime>
#include <cstring>
#include <string>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)

class Tools {
	Tools();
	~Tools();
public:
	void hideMouse();
	int Rand(int x);
	void gotoxy(short x, short y);
};