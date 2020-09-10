#include "../Utils/StdAfx.h"

int main()
{
	Log log;
	// log.SetLevel(log::LevelError);
	log.Warn("hello");
	log.Error("hello");
	log.Info("hello");

	return EXIT_SUCCESS;
}