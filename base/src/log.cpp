//plaese cat log.h
#include <log.h>
void MyLog(){
	Log log;
	log.setLevel(log.levelWarn);
	log.LogInfo("info");
	log.LogWarn("warn");
	log.LogDebug("debug");
}
