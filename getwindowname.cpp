#include <iostream>
#include <windows.h>
#include <string>
using std::string;

string GetActiveWindowTitle()
{
 char wnd_title[256];
 HWND hwnd=GetForegroundWindow(); // get handle of currently active window
 GetWindowText(hwnd,wnd_title,sizeof(wnd_title));
    std::cout << wnd_title << std::endl;
    return wnd_title;
}

int main()
{
     Sleep(2500);
    GetActiveWindowTitle();
    
}