#include <iostream>
#include <windows.h>
#include <stdio.h>

DWORD keybindA = 0x41;
DWORD keybindC = 0x43;
DWORD keybindD = 0x44;
DWORD keybindV = 0x56;
DWORD keybindCTRL = 0x11;
DWORD keybindALT = 0x12;
DWORD keybindTAB = 0x09;
DWORD keybindWIN = 0x5B;
DWORD x = 0x41;

void keyStroke(DWORD x) {
    INPUT ip = {};

    // press D
    ip.type = INPUT_KEYBOARD;
	ip.ki.wVk = x; // virtual-key code for the key
	SendInput(1, &ip, sizeof(INPUT));

    // release D
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));

};


int main() {

    Sleep(2000);
    keyStroke(x);

}