#include "../Utils/StdAfx.h"

namespace apple {
	void print(const char* name)
	{
		LOG(name);
	}
}

namespace orange {
	void print(const char* name)
	{
		std::stringstream s("");
		s << name;
		s << " ORANGE";
		LOG(s.str().c_str());
	}
}

int main()
{
	namespace o = orange;
	o::print("hi");
	return EXIT_SUCCESS;
}