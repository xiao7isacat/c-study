#pragma once
#include <iostream>
class Log{
public:
	enum level{
		levelInfo = 0,levelWarn,levelDebug
	}; 
private:
	int logLevel = 2;
public:
	void setLevel(int level){
		logLevel = level;
	}
	void LogInfo(const char* messgae){
		if (logLevel >= levelInfo){
			std::cout << messgae << std::endl;
		}
	}
	void LogWarn(const char* messgae){
		if (logLevel >= levelWarn){
			std::cout << messgae << std::endl;
		}
	}
	void LogDebug(const char* messgae){
		if (logLevel >= levelDebug){
			std::cout << messgae << std::endl;
		}
	}

};

void MyLog();
