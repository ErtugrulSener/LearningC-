#include "../Utils/StdAfx.h"
#include <stdlib.h>

int main()
{
	const char bla[6 + 1] = u8"Cherno";
	LOG(bla);

	using namespace std::string_literals;
	std::string name0 = "Cherno "s + "hello";

	const char* example = R"(a
b
c
)";
	LOG(example);

	// 2 Byte per character type, widecharacter
	const wchar_t* name2 = L"Cherno";
	const char16_t* name3 = u"Cherno";

	// 32 Bits = 4 Bytes per character
	const char32_t* name4 = U"Cherno";

	// *It differs from compiler to compiler
	return EXIT_SUCCESS;
}