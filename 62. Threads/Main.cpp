#include "../Utils/StdAfx.h"

static bool s_Finished = false;

void DoWork()
{
	while(!s_Finished)
	{
		LOG("Hello I'm doing work...");
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
}

int main()
{
	std::thread worker(DoWork);

	std::cin.get();
	s_Finished = true;

	worker.join();
	LOG("Finished");

	return EXIT_SUCCESS;
}