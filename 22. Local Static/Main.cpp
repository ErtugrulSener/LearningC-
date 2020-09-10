#include "../Utils/StdAfx.h"
#include "Static.h"

class Singleton
{
public:
	static Singleton& Get()
	{
		static Singleton s_Instance;
		return s_Instance;
	}

	void Hello() {};
};

void Function()
{
	static int i = 0;
	i++;
	LOG(i);
}

int main()
{
	Singleton::Get().Hello();

	Function();
	Function();
	Function();
	Function();
	Function();

	return EXIT_SUCCESS;
}