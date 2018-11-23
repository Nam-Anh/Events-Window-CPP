#include <iostream>
#include <Windows.h>


#define HOTKEY1 1
#define HOTKEY2 1002

using namespace std;

int main()
{
	/*Register hotKeys so there are two hotKeys */
	RegisterHotKey(NULL, HOTKEY1, MOD_ALT | MOD_NOREPEAT, 0x53); // ALT+s
	RegisterHotKey(NULL, HOTKEY2, MOD_ALT | MOD_NOREPEAT, 0x51); // ALT+q
	/*Initilize one message to get message from system*/
	MSG msg = { 0 };
	/*Get message return > 0 if message is not null*/
	while (GetMessage(&msg, NULL, 0, 0) != 0)
	{
		/*if message = HotKey then do action*/
		if (msg.message == WM_HOTKEY)
		{
			cout << "OK" << endl;
		}
	}
	
	return 0;
}