#include "../Utils/StdAfx.h"

class Random
{
public:
	Random(const Random& s) = delete;

	static Random& Get()
	{
		static Random instance;
		return instance;
	}

	static float Float() { return Get().IFloat(); }

private:
	Random() {}

	float m_RandomGeneratedFloat = 5.0;

	float IFloat() {
		return m_RandomGeneratedFloat;
	}
};

int main()
{
	auto s = Random::Float();
	LOG(s);
	return EXIT_SUCCESS;
}