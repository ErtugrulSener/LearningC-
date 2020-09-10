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

int main()
{
	const Tier* t = new Tier();
	delete t;
	LOG("~~~~~~~~~~~~~~");
	const Hund* h = new Hund();
	delete h;
	LOG("~~~~~~~~~~~~~~");
	const Tier* poly = new Hund();
	delete poly;
	return EXIT_SUCCESS;
}