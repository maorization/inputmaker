#define UNICODE
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

DWORD ESC = 0x1B;
DWORD DEL = 0x2E;
DWORD BREAK = 0x03;
DWORD SHIFT = 0xA0;
DWORD END = 0x23;
DWORD CTRL = 0x11;
DWORD ALT = 0x12;
DWORD PAUSE = 0x13;
DWORD TAB = 0x09;
DWORD WIN = 0x5B;
DWORD D = 0x44;
DWORD A = 0x41;
DWORD C = 0x43;
DWORD V = 0x56;



void keyStroke(const DWORD &i) {
    INPUT ip = {};

    // press D
    ip.type = INPUT_KEYBOARD;
    ip.ki.wVk = i;
    SendInput(1, &ip, sizeof(INPUT));

	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}

void hold(const DWORD &i) {
INPUT ip = {};

    // press D
    ip.type = INPUT_KEYBOARD;
    ip.ki.wVk = i;
    SendInput(1, &ip, sizeof(INPUT));
}

void release(const DWORD &i) {
INPUT ip = {};

     ip.type = INPUT_KEYBOARD;
    ip.ki.wVk = i;
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
}

void findTerminal() {
    HWND hWnd = ::FindWindow(NULL, L"192.168.1.23 - Remote Desktop Connection");
                while (hWnd == NULL) {
                hWnd = FindWindow(NULL, L"192.168.1.23 - Remote Desktop Connection");
                std::cout << "Start terminal" << std::endl;
                Sleep(1000);
            }
}

void switchToTerminal() {
HWND hWnd = ::FindWindow(NULL, L"192.168.1.23 - Remote Desktop Connection");
if (hWnd) {
    // move to foreground
    ::ShowWindow(hWnd,1);
}
};



bool isFullscreen(HWND windowHandle)
{
    MONITORINFO monitorInfo = { 0 };
    monitorInfo.cbSize = sizeof(MONITORINFO);
    GetMonitorInfo(MonitorFromWindow(windowHandle, MONITOR_DEFAULTTOPRIMARY), &monitorInfo);

    RECT windowRect;
    GetWindowRect(windowHandle, &windowRect);

    return windowRect.left == monitorInfo.rcMonitor.left
        && windowRect.right == monitorInfo.rcMonitor.right
        && windowRect.top == monitorInfo.rcMonitor.top
        && windowRect.bottom == monitorInfo.rcMonitor.bottom;
}

void goFullScreen() {
    HWND hWnd = ::FindWindow(NULL, L"192.168.1.23 - Remote Desktop Connection");

     while (isFullscreen(hWnd) == false) {
        SetForegroundWindow(hWnd);
        hold(CTRL);
        hold(ALT);
        keyStroke(BREAK);
        release(ALT);
        release(CTRL);
        Sleep(1000);
          
      }
}



int main()
{
    
    findTerminal();
    switchToTerminal();
    goFullScreen();
    Sleep(1500);
    hold(WIN);
    keyStroke(D);
    release(WIN);
    
    

  

    // keyStroke(D);


}