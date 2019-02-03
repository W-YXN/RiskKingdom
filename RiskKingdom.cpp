#include "pch.h"
#include "headers.h"

std::mutex mu;

int main()
{
	SetConsoleTitle(TEXT("Snake"));
	Window mainWindow;
	mainWindow.setMediumWindow();
	
	bool *WindowCenter = new bool;
	*WindowCenter = true;
	std::thread set_center{ setCentredWindow , mainWindow ,std::ref(WindowCenter) };
	set_center.detach();	//keep the window center

	Tools *StartTool = new Tools;
	mu.lock();
	std::thread beginning{ theBeginning,*StartTool};
	if (beginning.joinable()) {
		std::cout << "threadID=" << beginning.get_id() << std::endl;
		Sleep(100);
		system("cls");
		mu.unlock();
		if (beginning.joinable()) beginning.join();
	}
	mu.try_lock();
	mu.unlock();
	StartTool = NULL;
	delete StartTool;//begining;



	*WindowCenter = false;
	Sleep(500);
	WindowCenter = NULL;
	delete WindowCenter;
	system("Pause");//exit;
	return 0;
}