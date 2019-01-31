#include "pch.h"
#include "headers.h"

std::mutex mu;

int main()
{
	SetConsoleTitle(TEXT("Snake"));
	system("mode con cols=80 lines=31");
	Tools *StartTool = new Tools;
	mu.lock();
	std::thread beginning{ theBeginning,*StartTool};
	if (beginning.joinable()) {
		std::cout << "threadID=" << beginning.get_id() << std::endl;
		Sleep(4000);
		system("cls");
		mu.unlock();
		if (beginning.joinable()) beginning.join();
	}
	mu.try_lock();
	mu.unlock();
	StartTool = NULL;
	delete StartTool;
	system("Pause");
	return 0;
}
