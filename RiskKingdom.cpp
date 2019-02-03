#include "pch.h"
#include "headers.h"

std::mutex mu;

HANDLE originConsoleHandle;
HANDLE newConsoleHandle;
bool *WindowCenter;
bool doProgressBar;

int main()
{
	prepareAll();
	Sleep(100);
	closeAll();
	
	return 0;
}


void prepareAll() {
	originConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	newConsoleHandle = CreateConsoleScreenBuffer(
		GENERIC_READ | GENERIC_WRITE,
		FILE_SHARE_READ | FILE_SHARE_WRITE, 
		NULL, CONSOLE_TEXTMODE_BUFFER, NULL);//Set Handles.

	SetConsoleTitle(TEXT("RiskKingdom"));
	Tools *StartTool = new Tools;
	Window mainWindow;
	setOutputBuffer(newConsoleHandle);
	StartTool->hideMouse();
	mainWindow.setMediumWindow();
	setOutputBuffer(originConsoleHandle);
	StartTool->hideMouse();
	mainWindow.setMediumWindow();//SetMedium.

	WindowCenter = new bool;
	*WindowCenter = true;
	std::thread set_center{ setCentredWindow , mainWindow ,std::ref(WindowCenter) };
	set_center.detach();	//keep the window center

	mu.lock();
	setOutputBuffer(newConsoleHandle);
	std::cout << "threadID=" << (int)_getpid() << std::endl;
	Sleep(300);
	system("cls");
	setOutputBuffer(originConsoleHandle);
	mu.unlock();//output pid

	std::thread beginning{ theBeginning,*StartTool };
	if (beginning.joinable()) {
		if (beginning.joinable()) beginning.join();
	}
	mu.try_lock();
	mu.unlock();
	StartTool = NULL;
	delete StartTool;//begining;

	doProgressBar = true;
	std::thread progressBar{ goProgressBar ,std::ref(doProgressBar) };
	progressBar.detach();
	Sleep(5000);
}

void closeAll() {

	*WindowCenter = false;
	Sleep(200);
	WindowCenter = NULL;
	delete WindowCenter;//Stop keeping the Window Center.

	mu.lock();
	Sleep(100);
	doProgressBar = false;
	mu.unlock();

	CloseHandle(newConsoleHandle);

	//system("Pause");
}