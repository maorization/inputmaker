#define UNICODE
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;



DWORD D = 0x44;
DWORD A = 0x41;
DWORD C = 0x43;
DWORD V = 0x56;
DWORD W = 0x57;



void keyStroke(const DWORD &i) {
    INPUT ip = {};

    // press D
    ip.type = INPUT_KEYBOARD;
    ip.ki.wVk = i;
    SendInput(1, &ip, sizeof(INPUT));

	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}



int main() {

    Sleep(3000);

    
    keyStroke(W);
}

