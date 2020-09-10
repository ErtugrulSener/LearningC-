#include "../Utils/StdAfx.h"

class Entity
{
public:
	// 1) The initializing will follow the elements AS THEY ARE DECLARED not as they're ordered in the init. list
	// So be aware of dependencies between elements of init. list
	Entity() : m_X(0), m_Y(0), m_Name("Cherno"), abc(m_X) {
	}
	~Entity() = default;

	int abc;
	int m_X, m_Y;
	std::string m_Name;
};

int main(void)
{
	Entity e0;
	// 1) e0.abc has garbage value, because abc is declared with m_X, but m_X gets declared after abc
	// Even if the order in the init. list would let you think something else
	LOG(e0.abc);
	return EXIT_SUCCESS;
}