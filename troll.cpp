#include <iostream>
#include <windows.h>
#include <stdio.h>

DWORD keybindA = 0x41;
DWORD keybindC = 0x43;
DWORD keybindV = 0x56;
DWORD keybindQ = 0x51;
DWORD keybindW = 0x57;
DWORD keybindE = 0x45;
DWORD keybindR = 0x52;

DWORD keybindCTRL = 0x11;


void ctrlA()
{
    INPUT inputs[4] = {};
    ZeroMemory(inputs, sizeof(inputs));

    inputs[0].type = INPUT_KEYBOARD;
    inputs[0].ki.wVk = keybindCTRL;

    inputs[1].type = INPUT_KEYBOARD;
    inputs[1].ki.wVk = keybindA;

    inputs[2].type = INPUT_KEYBOARD;
    inputs[2].ki.wVk = keybindA;
    inputs[2].ki.dwFlags = KEYEVENTF_KEYUP;

    inputs[3].type = INPUT_KEYBOARD;
    inputs[3].ki.wVk = keybindCTRL;
    inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;

    UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));

};



void pressA()
{
INPUT inputs[1] = {};
    ZeroMemory(inputs, sizeof(inputs));

    inputs[0].type = INPUT_KEYBOARD;
    inputs[0].ki.wVk = keybindA;

    inputs[1].type = INPUT_KEYBOARD;
    inputs[1].ki.wVk = keybindA;
    inputs[1].ki.dwFlags = KEYEVENTF_KEYUP;

    UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
};

void pressQ()
{
INPUT inputs[1] = {};
    ZeroMemory(inputs, sizeof(inputs));

    inputs[0].type = INPUT_KEYBOARD;
    inputs[0].ki.wVk = keybindQ;

    inputs[1].type = INPUT_KEYBOARD;
    inputs[1].ki.wVk = keybindQ;
    inputs[1].ki.dwFlags = KEYEVENTF_KEYUP;

    UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
};

void pressW()
{
INPUT inputs[1] = {};
    ZeroMemory(inputs, sizeof(inputs));

    inputs[0].type = INPUT_KEYBOARD;
    inputs[0].ki.wVk = keybindW;

    inputs[1].type = INPUT_KEYBOARD;
    inputs[1].ki.wVk = keybindW;
    inputs[1].ki.dwFlags = KEYEVENTF_KEYUP;

    UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
};

void pressE()
{
INPUT inputs[1] = {};
    ZeroMemory(inputs, sizeof(inputs));

    inputs[0].type = INPUT_KEYBOARD;
    inputs[0].ki.wVk = keybindE;

    inputs[1].type = INPUT_KEYBOARD;
    inputs[1].ki.wVk = keybindE;
    inputs[1].ki.dwFlags = KEYEVENTF_KEYUP;

    UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
};


void pressR()
{
INPUT inputs[1] = {};
    ZeroMemory(inputs, sizeof(inputs));

    inputs[0].type = INPUT_KEYBOARD;
    inputs[0].ki.wVk = keybindR;

    inputs[1].type = INPUT_KEYBOARD;
    inputs[1].ki.wVk = keybindR;
    inputs[1].ki.dwFlags = KEYEVENTF_KEYUP;

    UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
};

int main()
{
    Sleep(5000);;
    // ctrlA();
    // pressQ();
    // pressW();
    pressR();


    //releaseCTRL();

}
