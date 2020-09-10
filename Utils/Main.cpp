#include "StdAfx.h"

int main()
{
	Log log;
	log.SetLevel(Log::LevelError);
	log.Error("hello");
	log.Warn("hello");
	log.Info("hello");

	return EXIT_SUCCESS;
}