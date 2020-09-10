#pragma once

#if _DEBUG == 1
#define LOG(x) std::cout << "[DEBUG] " << x << std::endl;
#else
#define LOG(x) std::cout << x << std::endl;
#endif

class Log
{
public:
	enum Level
	{
		LevelError = 0,
		LevelWarning = 1,
		LevelInfo = 2
	};

public:
	void SetLevel(Level level)
	{
		m_iLogLevel = level;
	}

	void Error(const char* c_szMsg)
	{
		if (m_iLogLevel >= LevelError)
			std::cout << "[ERROR]: " << c_szMsg << std::endl;
	}

	void Warn(const char* c_szMsg)
	{
		if (m_iLogLevel >= LevelWarning)
			std::cout << "[WARNING]: " << c_szMsg << std::endl;
	}

	void Info(const char* c_szMsg)
	{
		if (m_iLogLevel >= LevelInfo)
			std::cout << "[INFO]: " << c_szMsg << std::endl;
	}

private:
	Level m_iLogLevel = LevelError;
};