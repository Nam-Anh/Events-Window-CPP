#include <Windows.h>
#include <iostream>


#define HOTKEY1 1

using namespace std;

int main() {
	/*Register hotKeys so there are two hotKeys */
	RegisterHotKey(NULL, HOTKEY1, MOD_ALT | MOD_NOREPEAT, 0x53); // ALT+s
																 /*Initilize one message to get message from system*/
	MSG msg = { 0 };
	/*Get message return > 0 if message is not null*/
	while (GetMessage(&msg, NULL, 0, 0) != 0)
	{
		POINT p;
		if (GetCursorPos(&p))
		{
			int x = p.x;
			int y = p.y;
			cout << "x: " << x << "--y: " << y << endl;
			Sleep(1000);
		}
	}
	
}
