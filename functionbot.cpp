#include <iostream>
#include <windows.h>
#include <stdio.h>

DWORD a = 0x41;
DWORD c = 0x43;
DWORD d = 0x44;
DWORD v = 0x56;
DWORD CTRL = 0x11;
DWORD ALT = 0x12;
DWORD TAB = 0x09;
DWORD WIN = 0x5B;
DWORD x = 0x58;



void keyStroke(DWORD d) {
    INPUT ip = {};

    // press X
    ip.type = INPUT_KEYBOARD;
	ip.ki.wVk = d; // virtual-key code for the key
	SendInput(1, &ip, sizeof(INPUT));

    // release X
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));

};

void holdALT() {
    INPUT ip = {};

    // press D
    ip.type = INPUT_KEYBOARD;
	ip.ki.wVk = ALT; // virtual-key code for the key
	SendInput(1, &ip, sizeof(INPUT));


};
void holdWIN() {
    INPUT ip = {};

    // press D
    ip.type = INPUT_KEYBOARD;
	ip.ki.wVk = WIN; // virtual-key code for the key
	SendInput(1, &ip, sizeof(INPUT));


};

void releaseALT() {
    INPUT ip = {};

    // release ALT
    ip.ki.wVk = ALT;
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    // 
    SendInput(1, &ip, sizeof(INPUT));

}

void releaseWIN() {
    INPUT ip = {};

    // release ALT
    ip.ki.wVk = WIN;
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    // 
    SendInput(1, &ip, sizeof(INPUT));

}


int main() {

    Sleep(2000);
    holdWIN();
    // keyStroke(d);
    Sleep(1000);

    releaseWIN();


}