#include "pch.h"
#include "headers.h"

HANDLE CurrentHandle;

void Window::setBigWindow() {
	system("mode con cols=103 lines=34");
}

void Window::setMediumWindow() {
	system("mode con cols=80 lines=31");
}

void Window::setSmallWindow() {
	//Nothing to do.
}

void Window::setCentre(bool& stopValue) {
	HWND hwndOwner;
	RECT rc, rcDlg, rcOwner;
	while (stopValue == true) {
		//检索与调用进程相关联的控制台窗口句柄
		HWND hwnd = GetConsoleWindow();
		//GetParent函数获得一个指定子窗口的父窗口句柄赋值给窗口句柄变量hwndOwner，当为空的情况下，将桌面窗口的句柄赋值给hwndOwner。
		//桌面窗口覆盖整个屏幕。桌面窗口是一个要在其上绘制所有的图标和其他窗口的区域
		if ((hwndOwner = GetParent(hwnd)) == NULL)
		{
		hwndOwner = GetDesktopWindow();
		}

		//该函数返回指定窗口的边框矩形的尺寸。
		GetWindowRect(hwndOwner, &rcOwner);
		GetWindowRect(hwnd, &rcDlg);
		//将矩形的lpSourceRect内容复制给矩形lpDestRect
		//VC：BOOL CopyRect( LPRECT lprcDst, CONST RECT* lprcSrc);
		//[参数表]
		//lpDestRect---- - RECT，目标矩形结构
		//lpSourceRect-- - RECT，源矩形
		CopyRect(&rc, &rcOwner);

		// Offset the owner and dialog box rectangles so that 
		// right and bottom values represent the width and 
		// height, and then offset the owner again to discard 
		// space taken up by the dialog box. 

		OffsetRect(&rcDlg, -rcDlg.left, -rcDlg.top);
		OffsetRect(&rc, -rc.left, -rc.top);
		OffsetRect(&rc, -rcDlg.right, -rcDlg.bottom);

		// The new position is the sum of half the remaining 
		// space and the owner's original position. 
		//新位置是剩余空间的一半和桌面的原始位置的总和。
		SetWindowPos(hwnd, HWND_TOP,
			rcOwner.left + (rc.right / 2),
			rcOwner.top + (rc.bottom / 2),
			0, 0,          // ignores size arguments 
			SWP_NOSIZE);
		Sleep(250);
	}
	return;
}

Window::Window() {
	//Nothing to do.
}

Window::~Window() {
	//Nothing to do.
}

void setCentredWindow(Window window, bool* stopValue) {
	window.setCentre(*stopValue);
	return;
}

HANDLE getCurrentHandle() {
	return CurrentHandle;
}