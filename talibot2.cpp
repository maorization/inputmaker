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



void showDesktop()
{
    INPUT inputs[4] = {};
    ZeroMemory(inputs, sizeof(inputs));

    inputs[0].type = INPUT_KEYBOARD;
    inputs[0].ki.wVk = keybindWIN;

    inputs[1].type = INPUT_KEYBOARD;
    inputs[1].ki.wVk = keybindD;

    inputs[2].type = INPUT_KEYBOARD;
    inputs[2].ki.wVk = keybindD;
    inputs[2].ki.dwFlags = KEYEVENTF_KEYUP;

    inputs[3].type = INPUT_KEYBOARD;
    inputs[3].ki.wVk = keybindWIN;
    inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;

    UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));

};

void altTab()
{
    INPUT inputs[4] = {};
    ZeroMemory(inputs, sizeof(inputs));

    inputs[0].type = INPUT_KEYBOARD;
    inputs[0].ki.wVk = keybindALT;

    inputs[1].type = INPUT_KEYBOARD;
    inputs[1].ki.wVk = keybindTAB;

    inputs[2].type = INPUT_KEYBOARD;
    inputs[2].ki.wVk = keybindTAB;
    inputs[2].ki.dwFlags = KEYEVENTF_KEYUP;

    inputs[3].type = INPUT_KEYBOARD;
    inputs[3].ki.wVk = keybindALT;
    inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;

    UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));

};

void altTab2Times()
{
    INPUT inputs[5] = {};
    ZeroMemory(inputs, sizeof(inputs));

    inputs[0].type = INPUT_KEYBOARD;
    inputs[0].ki.wVk = keybindALT;

    inputs[1].type = INPUT_KEYBOARD;
    inputs[1].ki.wVk = keybindTAB;

    inputs[3].type = INPUT_KEYBOARD;
    inputs[3].ki.wVk = keybindTAB;
    inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;

    inputs[2].type = INPUT_KEYBOARD;
    inputs[2].ki.wVk = keybindTAB;

    inputs[3].type = INPUT_KEYBOARD;
    inputs[3].ki.wVk = keybindTAB;
    inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;


    inputs[4].type = INPUT_KEYBOARD;
    inputs[4].ki.wVk = keybindALT;
    inputs[4].ki.dwFlags = KEYEVENTF_KEYUP;

    UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
    ZeroMemory(inputs, sizeof(inputs));

};

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

void pressSpace()
{
INPUT inputs[1] = {};
    ZeroMemory(inputs, sizeof(inputs));

    inputs[0].type = INPUT_KEYBOARD;
    inputs[0].ki.wVk = VK_SPACE;

    inputs[1].type = INPUT_KEYBOARD;
    inputs[1].ki.wVk = VK_SPACE;
    inputs[1].ki.dwFlags = KEYEVENTF_KEYUP;

    UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
};


int main()
{
    Sleep(3000);;
    altTab2Times();

    //releaseCTRL();

}
