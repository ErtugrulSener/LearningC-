#include "../Utils/StdAfx.h"

class Entity
{
private:
	int m_X, m_Y;
	mutable int var;

public:
	// 1) The const after the function means, we cannot modify any of the class member variables
	// 2) const int* const GetX() const -> This GetX() method returns unmodifiable values. GetX returns a constant pointer to an int that is constant.
	int GetX() const
	{
		// m_X = 2; // ERROR 1)
		var = 2; // Totally works, even if the method is marked as const
		return m_X;
	}

	void SetX(int x)
	{
		m_X = x;
	}
};

void PrintEntity(const Entity& e)
{
	LOG(e.GetX());
}

int main(void)
{
	Entity e;

	// Is like a 'fake' keyword, that won't change the code
	// It's more like a promise than an actual rule, it's breakable

	const int MAX_AGE = 90; // Syntactically a is const, "I won't modify it"
	// a = 2; -- ERROR

	const int* const a = new int;
	// 1) The first const before int* is the modifier for pointer value
	// 2) The second const before a is the modifier for the pointer

	// *a = 2; // ERROR 1)
	// a = (int*)&MAX_AGE; // ERROR, 2)

	LOG(*a);
	return EXIT_SUCCESS;
}