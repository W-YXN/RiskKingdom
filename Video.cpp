#include "pch.h"
#include "headers.h"

void goProgressBar(bool& stopValue) {
	while (true) {
		mu.lock();
		if (true == stopValue) {
			setOutputBuffer(newConsoleHandle);
			progress_bar();
			Sleep(100);
			progress_bar();
			Sleep(100);
			progress_bar();
			Sleep(100);
			progress_bar();
			Sleep(100);
			progress_bar();
			Sleep(100);
			progress_bar();
			Sleep(100);
			progress_bar();
			Sleep(100);
			progress_bar();
			Sleep(70);
			setOutputBuffer(originConsoleHandle);
		}
		else;
		mu.unlock();
		Sleep(30);
	}
}

void progress_bar()
{
	Tools tempTool;
	static int BarNumber = 0;
	constexpr short ProgressBar[9][13] =
	{
		{
		},
		{
			1,2,3,-1,
			0,0,0,-1,
			0,0,0,-1,
		},
		{
			0,1,2,-1,
			0,0,3,-1,
			0,0,0,-1,
		},
		{
			0,0,1,-1,
			0,0,2,-1,
			0,0,3,-1,
		},
		{
			0,0,0,-1,
			0,0,1,-1,
			0,3,2,-1,
		},
		{
			0,0,0,-1,
			0,0,0,-1,
			3,2,1,-1,
		},
		{
			0,0,0,-1,
			3,0,0,-1,
			2,1,0,-1,
		},
		{
			3,0,0,-1,
			2,0,0,-1,
			1,0,0,-1,
		},
		{
			2,3,0,-1,
			1,0,0,-1,
			0,0,0,-1,
		}
	};
	BarNumber++;
	if (BarNumber > 8)
	{
		BarNumber = 1;
	}

	int x = 37, y = 12;

	for (int i = 0; i <= 11; i++)
	{
		switch (ProgressBar[BarNumber][i])
		{
		case 1:
			tempTool.gotoxy(x, y);
			tempTool.coloredOutput("��", GREY);
			x += 2;
			break;
		case 2:
			tempTool.gotoxy(x, y);
			tempTool.coloredOutput("��", WHITE);
			x += 2;
			break;
		case 3:
			tempTool.gotoxy(x, y);
			tempTool.coloredOutput("��", L_WHITE);
			x += 2;
			break;
		case 0:
			tempTool.gotoxy(x, y);
			std::cout << "  ";
			x += 2;
			break;
		case -1:
			x = 37;
			y++;
			break;
		}
	}
}

void theBeginning(Tools Tool) {
	mu.lock();
	system("cls");
	Tool.copyrightVideo();
	mu.unlock();
}
