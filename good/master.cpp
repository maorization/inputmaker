#define UNICODE
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

DWORD ALT = 0x12;
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

void switchToTerminal() {
HWND hWnd = ::FindWindow(NULL, L"192.168.1.23 - Remote Desktop Connection");
if (hWnd) {
    // move to foreground
    ::ShowWindow(hWnd,3);
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

int main()
{
    Sleep(1000);
    HWND hWnd = ::FindWindow(NULL, L"192.168.1.23 - Remote Desktop Connection");
    Sleep(1500);
    while (isFullscreen(hWnd) == false) {
        Sleep(1000);
        cout << "not full screen" << endl;
    }

}