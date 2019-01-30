#include "pch.h"
#pragma once
#include <iostream>
#include <Windows.h>
#include <ctime>
#include <cstring>
#include <string>
#include <thread>

constexpr short WHITE = 0;
constexpr short L_WHITE = 1;
constexpr short GREY = 2;
constexpr short RED = 3;
constexpr short PINK = 4;
constexpr short BLUE = 5;
constexpr short L_BLUE = 6;
constexpr short GREEN = 7;
constexpr short L_GREEN = 8;
constexpr short GOLDEN = 9;
constexpr short YELLOW = 10;
constexpr short PURPLE = 11;
constexpr short INDIGO = 12;
constexpr short CYAN = 13;
constexpr short CYANINE = 14;

#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)

class Tools {
	Tools();
	~Tools();
public:
	void hideMouse();
	int Rand(int x);
	void gotoxy(short x, short y);
	void coloredOutput(std::string st, short id);
};