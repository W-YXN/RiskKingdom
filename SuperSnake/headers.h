#include "pch.h"

#pragma once
#ifndef HEADER_H
#define HEADER_H

#include <Windows.h>
#include <thread>
#include <mutex> 
#include "Tools.h"
#include "window.h"
#include "ini.h"

extern std::mutex mu;
extern std::stringstream ss;

constexpr short WHITE = (short)0;
constexpr short L_WHITE = (short)1;
constexpr short GREY = (short)2;
constexpr short RED = (short)3;
constexpr short PINK = (short)4;
constexpr short BLUE = (short)5;
constexpr short L_BLUE = (short)6;
constexpr short GREEN = (short)7;
constexpr short L_GREEN = (short)8;
constexpr short GOLDEN = (short)9;
constexpr short YELLOW = (short)10;
constexpr short PURPLE = (short)11;
constexpr short INDIGO = (short)12;
constexpr short CYAN = (short)13;
constexpr short CYANINE = (short)14;

#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)

int main();
void theBeginning(Tools Tool);
void pogress_bar();
void setCentredWindow(Window window, bool* stopValue);



#endif