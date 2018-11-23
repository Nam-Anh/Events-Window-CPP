#include <iostream>
#include <windows.h>
#include <stdlib.h>


using namespace std;

int main()
{
	
	{
		cout << "NamAnh's autoclicker" << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;


		int x, y, slpTime, i;
		//Get user's wanted times to click
		cout << "Enter the number of times to click: " << endl;
		cin >> i;
		cout << "Enter X Coordinate: " << endl;
		cin >> x;
		cout << "Enter y Coordinate: " << endl;
		cin >> y;
		cout << "Enter time in between clicks: " << endl;
		cin >> slpTime;
		//Print out all input information from user to confirm the input
		cout << "Status." << "\n X coordinate: " << x << " \nY coordinate: " << y << " \nTime in seconds between clicks: " << slpTime << endl;
		
		for (int t = 1; t <= i; t++) {
			//Move mouse to the position on which you want mouse click
			SetCursorPos(x, y);
			//Create mouse left click_down at the pos(x,y)
			mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
			//Create mouse left click_up at the pos(x,y)
			mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
			//Sleep to wait for the next click
			Sleep(slpTime * 1000);

			//If press ESC key, quit this program
			if (GetAsyncKeyState(VK_ESCAPE)) {
				exit(0);
			}else if (GetAsyncKeyState(VK_TAB)) {
				//If press TAB key, print out hello
				//This is a sample for other people who want to customize 
				//Key_input_signal and Event go with that key
				cout << "Hello" << endl;
			}
			else continue;			
		}
		return 0;
	}
}
