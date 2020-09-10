#include "../Utils/StdAfx.h"

template<typename T, T N>
class Array
{
private:
	T m_Array[N];

public:
	T GetSize() const { return N; }
};

int main()
{
	Array<int, 6> array;
	LOG(array.GetSize());
	return EXIT_SUCCESS;
}