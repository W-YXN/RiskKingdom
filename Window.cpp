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
		//��������ý���������Ŀ���̨���ھ��
		HWND hwnd = GetConsoleWindow();
		//GetParent�������һ��ָ���Ӵ��ڵĸ����ھ����ֵ�����ھ������hwndOwner����Ϊ�յ�����£������洰�ڵľ����ֵ��hwndOwner��
		//���洰�ڸ���������Ļ�����洰����һ��Ҫ�����ϻ������е�ͼ����������ڵ�����
		if ((hwndOwner = GetParent(hwnd)) == NULL)
		{
		hwndOwner = GetDesktopWindow();
		}

		//�ú�������ָ�����ڵı߿���εĳߴ硣
		GetWindowRect(hwndOwner, &rcOwner);
		GetWindowRect(hwnd, &rcDlg);
		//�����ε�lpSourceRect���ݸ��Ƹ�����lpDestRect
		//VC��BOOL CopyRect( LPRECT lprcDst, CONST RECT* lprcSrc);
		//[������]
		//lpDestRect---- - RECT��Ŀ����νṹ
		//lpSourceRect-- - RECT��Դ����
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
		//��λ����ʣ��ռ��һ��������ԭʼλ�õ��ܺ͡�
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