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


void keyPressTilde() {
    INPUT ip = {};

    // press ALT
    ip.type = INPUT_KEYBOARD;
	ip.ki.wVk = keybindALT; // virtual-key code for the key
	SendInput(1, &ip, sizeof(INPUT));

    // press TAB 2 times
    ip.ki.wVk = keybindTAB;
    SendInput(1, &ip, sizeof(INPUT));
    SendInput(1, &ip, sizeof(INPUT));

    // release TAB
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));

    // release ALT
    ip.ki.wVk = keybindALT;
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    // 
    SendInput(1, &ip, sizeof(INPUT));
};


int main()
{
    Sleep(3000);;
    keyPressTilde();

    //releaseCTRL();

}
