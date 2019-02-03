#include "pch.h"
#include "headers.h"


void pogress_bar()
{
	Tools tempTool;
	constexpr short PogressBar[9][13] =
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
	int BarNumber = 0;
	BarNumber++;
	if (BarNumber > 8)
	{
		BarNumber = 1;
	}

	int x = 37, y = 12;

	for (int i = 0; i <= 11; i++)
	{
		switch (PogressBar[BarNumber][i])
		{
		case 1:
			tempTool.gotoxy(x, y);
			tempTool.coloredOutput("¡ö", GREY);
			x += 2;
			break;
		case 2:
			tempTool.gotoxy(x, y);
			tempTool.coloredOutput("¡ö", WHITE);
			x += 2;
			break;
		case 3:
			tempTool.gotoxy(x, y);
			tempTool.coloredOutput("¡ö", L_WHITE);
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
