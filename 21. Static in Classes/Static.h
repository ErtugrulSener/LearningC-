#pragma once

class StaticTest
{
public:
	static int i;

	static int GetStatic()
	{
		return i;
	}
};