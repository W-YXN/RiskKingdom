#pragma once
#ifndef WINDOW_H
#define WINDOW_H

#include "pch.h"
#include "headers.h"

class Window {
public:
	Window();
	~Window();
	void setBigWindow();
	void setMediumWindow();
	void setSmallWindow();
	void setCentre(bool& stopValue);
};

#endif // !WINDOW_H
