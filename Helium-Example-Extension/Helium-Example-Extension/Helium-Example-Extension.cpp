#include"pch.h"
#include"Helium-Example-Extension.h"

#include<string>

using namespace std;
using namespace HeliumAPI;

string logger_name = "HEE";

namespace Helium_Example_Extension
{
	int HeliumStart(list<any> argument)
	{
		return 0;
	}
	int HeliumStop(list<any> argument)
	{
		return 0;
	}
	int ExtensionLoad(list<any> argument)
	{
		CreateExtensionLogger(logger_name);
		ExtensionLogInfo(logger_name, "Test Output");
		return 0;
	}
	int ExtensionUnload(list<any> argument)
	{
		DeleteExtensionLogger(logger_name);
		return 0;
	}
	int ServerStart(list<any> argument)
	{
		return 0;
	}
	int ServerInitializationFinish(list<any> argument)
	{
		return 0;
	}
	int ServerStop(list<any> argument)
	{
		return 0;
	}
	int PlayerJoin(list<any> argument)
	{
		return 0;
	}
	int PlayerLeave(list<any> argument)
	{
		return 0;
	}
	int GeneralInput(list<any> argument)
	{
		return 0;
	}
	int ConsoleInput(list<any> argument)
	{
		return 0;
	}
	int ServerOutput(list<any> argument)
	{
		return 0;
	}
	int PlayerInput(list<any> argument)
	{
		return 0;
	}
}
