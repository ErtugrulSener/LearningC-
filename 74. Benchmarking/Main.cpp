#include "../Utils/StdAfx.h"

class Timer
{
public:
	Timer() {
		m_StartTimepoint = std::chrono::high_resolution_clock::now();
	}

	~Timer()
	{
		Stop();
	}

	void Stop()
	{
		auto endTimepoint = std::chrono::high_resolution_clock::now();
		auto start = std::chrono::time_point_cast<std::chrono::microseconds>(m_StartTimepoint).time_since_epoch().count();
		auto end = std::chrono::time_point_cast<std::chrono::microseconds>(endTimepoint).time_since_epoch().count();

		auto us = end - start;
		double ms = us * 0.001;

		LOG(us << " us (" << ms << " ms)");
	}

private:
	std::chrono::time_point<std::chrono::high_resolution_clock> m_StartTimepoint;
};

int main()
{
	int value = 0;

	{
		Timer t;
		for (int i = 0; i < 1000000; ++i)
		{
		}
	}

	__debugbreak();
	return EXIT_SUCCESS;
}