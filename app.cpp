#include"DragonFireSDK.h"

void AppMain(void)
{
	char c[20];
	DeviceGetLocaleID(c,20);
	TextAdd(0,0,c,FontAdd("Courier","Regular",12,0xffffff));
}

void OnTimer(void)
{
}

void AppExit(void)
{
}
