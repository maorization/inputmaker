#define UNICODE
#include <iostream>
#include <windows.h>
#include <string>

DWORD keybindWIN = 0x5B;
DWORD keybindD = 0x44;

void switchToTerminal() {
HWND hWnd = ::FindWindow(NULL, L"192.168.1.23 - Remote Desktop Connection");
if (hWnd) {
    // move to foreground
    ::ShowWindow(hWnd,3);
}
};



void showDesktop() {
    INPUT ip = {};

    // press WIN
    ip.type = INPUT_KEYBOARD;
	ip.ki.wVk = keybindWIN; // virtual-key code for the key
	SendInput(1, &ip, sizeof(INPUT));

    // press D
    ip.ki.wVk = keybindD;
    SendInput(1, &ip, sizeof(INPUT));

    // release D
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));

    // release ALT
    ip.ki.wVk = keybindWIN;
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    // 
    SendInput(1, &ip, sizeof(INPUT));
};


int main() {

    Sleep(1500);
    switchToTerminal();
    Sleep(1500);
    showDesktop();

}