#include "../Utils/StdAfx.h"

class Entity
{
private:
	std::string m_Name;

public:
	// 1) First way to use it: As a class argument, to change it even if the entity is marked as const, see *1)
	mutable int m_iDebugCount = 0;

	const std::string& GetName() const
	{
		++m_iDebugCount;
		return m_Name;
	}
};

int main(void)
{
	// *1)
	const Entity e;
	e.GetName();
	LOG(e.m_iDebugCount);

	// 2) To pass a mutable variable to a lambda and change it in there
	int* x = new int;
	*x = 8;

	auto f = [=]() // add mutable keyword after () if u use & for reference to lambda
	{
		LOG(++(*x));
	};
	f();

	return EXIT_SUCCESS;
}