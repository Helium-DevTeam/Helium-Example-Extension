#include"pch.h"

using namespace std;

namespace Helium_Example_Extension
{
	int HeliumStart(list<any> argument);
	int HeliumStop(list<any> argument);
	int ExtensionLoad(list<any> argument);
	int ExtensionUnload(list<any> argument);
	int ServerStart(list<any> argument);
	int ServerInitializationFinish(list<any> argument);
	int ServerStop(list<any> argument);
	int PlayerJoin(list<any> argument);
	int PlayerLeave(list<any> argument);
	int GeneralInput(list<any> argument);
	int ConsoleInput(list<any> argument);
	int ServerOutput(list<any> argument);
	int PlayerInput(list<any> argument);
}