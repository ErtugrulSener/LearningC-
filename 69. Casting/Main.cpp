#include "../Utils/StdAfx.h"

class Tier
{
public:
	Tier() { LOG("Erstelle Tier"); }
	virtual ~Tier() { LOG("Zerstöre Tier"); }
};

class Hund : public Tier
{
public:
	Hund() { LOG("Erstelle Hund"); }
	~Hund() { LOG("Zerstöre Hund"); }
};

class Test
{

};

int main()
{
	double value = 5.25;
	Test *t = reinterpret_cast<Test*>(&value);
	return EXIT_SUCCESS;
}