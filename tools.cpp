#include "pch.h"
#include "headers.h"

std::stringstream ss;

void setOutputBuffer(HANDLE id) {
	SetConsoleActiveScreenBuffer(id);
	CurrentHandle = id;
}

void Tools::copyrightVideo()
{
	int x = 12;
	int y = 1;


	gotoxy(0,0);
	coloredOutput("F-studio��Ʒ", GREY);
	Sleep(100);
	gotoxy(0,0);
	coloredOutput("F-studio��Ʒ", WHITE);
	Sleep(100);
	gotoxy(0,0);
	coloredOutput("F-studio��Ʒ", L_WHITE);
	Sleep(100);

	int a = x;
	int b = y;
	for (int i = 1; i <= 812; i++)
	{
		switch (CopyrightVideo[i])
		{
		case 0:
			gotoxy(a, b);
			std::cout << "  ";
			a += 2;
			break;
		case 1:
			gotoxy(a, b);
			coloredOutput("��", GREY);
			a += 2;
			break;
		case 2:
			gotoxy(a, b);
			coloredOutput("��", GREY);
			a += 2;
			break;
		case 3:
			gotoxy(a, b);
			coloredOutput("��", GREY);
			a += 2;
			break;
		case 4:
			gotoxy(a, b);
			coloredOutput("��", GREY);
			a += 2;
			break;
		case -1:
			a = x;
			b++;
			break;
		}
	}
	a = x, b = y;
	for (int i = 1; i <= 812; i++)
	{
		switch (CopyrightVideo[i])
		{
		case 0:
			a += 2;
			break;
		case 1:
			gotoxy(a, b);
			coloredOutput("��", WHITE);
			a += 2;
			break;
		case 2:
			gotoxy(a, b);
			coloredOutput("��", WHITE);
			a += 2;
			break;
		case 3:
			gotoxy(a, b);
			coloredOutput("��", WHITE);
			a += 2;
			break;
		case 4:
			gotoxy(a, b);
			coloredOutput("��", WHITE);
			a += 2;
			break;
		case -1:
			a = x;
			b++;
			break;
		}
	}
	a = x, b = y;
	for (int i = 1; i <= 812; i++)
	{
		switch (CopyrightVideo[i])
		{
		case 0:
			a += 2;
			break;
		case 1:
			gotoxy(a, b);
			coloredOutput("��", L_WHITE);
			a += 2;
			break;
		case 2:
			gotoxy(a, b);
			coloredOutput("��", L_WHITE);
			a += 2;
			break;
		case 3:
			gotoxy(a, b);
			coloredOutput("��", L_WHITE);
			a += 2;
			break;
		case 4:
			gotoxy(a, b);
			coloredOutput("��", L_WHITE);
			a += 2;
			break;
		case -1:
			a = x;
			b++;
			break;
		}
	}
	a = x, b = y;
	for (int i = 1; i <= 812; i++)
	{
		switch (CopyrightVideo[i])
		{
		case 0:
			a += 2;
			break;
		case 1:
			a += 2;
			break;
		case 2:
			gotoxy(a, b);
			coloredOutput("��", WHITE);
			a += 2;
			break;
		case 3:
			gotoxy(a, b);
			coloredOutput("��", WHITE);
			a += 2;
			break;
		case 4:
			gotoxy(a, b);
			coloredOutput("��", WHITE);
			a += 2;
			break;
		case -1:
			a = x;
			b++;
			break;
		}
	}
	Sleep(50);
	a = x, b = y;
	for (int i = 1; i <= 812; i++)
	{
		switch (CopyrightVideo[i])
		{
		case 0:
			a += 2;
			break;
		case 1:
			a += 2;
			break;
		case 2:
			gotoxy(a, b);
			coloredOutput("��", GREY);
			a += 2;
			break;
		case 3:
			gotoxy(a, b);
			coloredOutput("��", GREY);
			a += 2;
			break;
		case 4:
			a += 2;
			break;
		case -1:
			a = x;
			b++;
			break;
		}
	}
	Sleep(50);
	a = x, b = y;
	for (int i = 1; i <= 812; i++)
	{
		switch (CopyrightVideo[i])
		{
		case 0:
			a += 2;
			break;
		case 1:
			a += 2;
			break;
		case 2:
			gotoxy(a, b);
			std::cout << " ";
			a += 2;
			break;
		case 3:
			a += 2;
			break;
		case 4:
			a += 2;
			break;
		case -1:
			a = x;
			b++;
			break;
		}
	}
	Sleep(3000);
	a = x, b = y;
	for (int i = 1; i <= 812; i++)
	{
		switch (CopyrightVideo[i])
		{
		case 0:
			a += 2;
			break;
		case 1:
			gotoxy(a, b);
			coloredOutput("��", WHITE);
			a += 2;
			break;
		case 2:
			a += 2;
			break;
		case 3:
			a += 2;
			break;
		case 4:
			a += 2;
			break;
		case -1:
			a = x;
			b++;
			break;
		}
	}

	a = x, b = y;
	for (int i = 1; i <= 812; i++)
	{
		switch (CopyrightVideo[i])
		{
		case 0:
			a += 2;
			break;
		case 1:
			gotoxy(a, b);
			coloredOutput("��", GREY);
			a += 2;
			break;
		case 2:
			a += 2;
			break;
		case 3:
			a += 2;
			break;
		case 4:
			gotoxy(a, b);
			coloredOutput("��", GREY);
			a += 2;
			break;
		case -1:
			a = x;
			b++;
			break;
		}
	}
	a = x, b = y;
	for (int i = 1; i <= 812; i++)
	{
		switch (CopyrightVideo[i])
		{
		case 0:
			a += 2;
			break;
		case 1:
			gotoxy(a, b);
			std::cout << "  ";
			a += 2;
			break;
		case 2:
			a += 2;
			break;
		case 3:
			gotoxy(a, b);
			std::cout << "  ";
			a += 2;
			break;
		case 4:
			gotoxy(a, b);
			std::cout << "  ";
			a += 2;
			break;
		case -1:
			a = x;
			b++;
			break;
		}
	}
	gotoxy(0,0);
	coloredOutput("F-studio��Ʒ", WHITE);
	Sleep(100);
	gotoxy(0,0);
	coloredOutput("F-studio��Ʒ", GREY);
	Sleep(100);
	std::string *str = new std::string;
	*str = "F-studio��Ʒ";
	int length = str->size();
	str = NULL;
	delete str;
	gotoxy(x, y);
	while (length--)
	{
		std::cout << " ";
	}
	Sleep(100);
	system("cls");
}


void Tools::gotoxy(short x, short y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(getCurrentHandle(), coord);
}

void Tools::hideMouse()
{
	HANDLE handle = getCurrentHandle();
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(handle, &CursorInfo);//GetConsoleInfo
	CursorInfo.bVisible = false; //Hide
	SetConsoleCursorInfo(handle, &CursorInfo);//SetStatus
}

int Tools::Rand(int x)
{
	srand( (int)time(0) + rand() * (rand()%107) / (rand()/107) );//Seed
	int tmp = rand() % x;//GetRandomNumber(0 to x-1)
	return tmp;//return
}

void Tools::coloredOutput(std::string st, short id)
{
	if (id == 15)//15 for radom.
	{
		id = Rand(15) + 1;
	}
	switch (id)
	{
	case 0://WHITE �ף�Default��
		SetConsoleTextAttribute(getCurrentHandle(), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		break;
	case 1://L_WHITE ����
		SetConsoleTextAttribute(getCurrentHandle(), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		break;
	case 2://GREY ��
		SetConsoleTextAttribute(getCurrentHandle(), FOREGROUND_INTENSITY);
		break;
	case 3://RED ��
		SetConsoleTextAttribute(getCurrentHandle(), FOREGROUND_RED);
		break;
	case 4://PINK ��
		SetConsoleTextAttribute(getCurrentHandle(), FOREGROUND_INTENSITY | FOREGROUND_RED);
		break;
	case 5://BULE ��
		SetConsoleTextAttribute(getCurrentHandle(), FOREGROUND_BLUE);
		break;
	case 6://L_BLUE ����
		SetConsoleTextAttribute(getCurrentHandle(), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
		break;
	case 7://GREEN ��
		SetConsoleTextAttribute(getCurrentHandle(), FOREGROUND_GREEN);
		break;
	case 8://L_GREEN ����
		SetConsoleTextAttribute(getCurrentHandle(), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		break;
	case 9://GOLDEN ��
		SetConsoleTextAttribute(getCurrentHandle(), FOREGROUND_RED | FOREGROUND_GREEN);
		break;
	case 10://YELLOW ��
		SetConsoleTextAttribute(getCurrentHandle(), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		break;
	case 11://PURLPE ��
		SetConsoleTextAttribute(getCurrentHandle(), FOREGROUND_RED | FOREGROUND_BLUE);
		break;
	case 12://INDIGO ��
		SetConsoleTextAttribute(getCurrentHandle(), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE);
		break;
	case 13://CYAN ��
		SetConsoleTextAttribute(getCurrentHandle(), FOREGROUND_GREEN | FOREGROUND_BLUE);
		break;
	case 14://CYANINE ݼ
		SetConsoleTextAttribute(getCurrentHandle(), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
		break;
	}
	std::cout << st;	//Output with Colour
	SetConsoleTextAttribute(getCurrentHandle(), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);//Default
}

Tools::Tools() {
	//Nothing to do.
}
Tools::~Tools() {
	//Nothing to do.
}