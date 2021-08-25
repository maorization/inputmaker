#include <iostream>
#include <windows.h>
#include <stdio.h>

DWORD keybindA = 0x41;
DWORD keybindC = 0x43;
DWORD keybindV = 0x56;


void keyStroke()
{
    //OutputString(L"Sending 'Win-D'\r\n");
    INPUT inputs[7] = {};
    ZeroMemory(inputs, sizeof(inputs));

    inputs[0].type = INPUT_KEYBOARD;
    inputs[0].ki.wVk = VK_CONTROL;
   
    inputs[1].type = INPUT_KEYBOARD;
    inputs[1].ki.wVk = keybindA;

    inputs[2].type = INPUT_KEYBOARD;
    inputs[2].ki.wVk = keybindA;
    inputs[2].ki.dwFlags = KEYEVENTF_KEYUP;

    inputs[3].type = INPUT_KEYBOARD;
    inputs[3].ki.wVk = VK_CONTROL;
    inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;




    inputs[4].type = INPUT_KEYBOARD;
    inputs[4].ki.wVk = VK_CONTROL;

    inputs[5].type = INPUT_KEYBOARD;
    inputs[5].ki.wVk = keybindC;

    inputs[6].type = INPUT_KEYBOARD;
    inputs[6].ki.wVk = keybindC;
    inputs[6].ki.dwFlags = KEYEVENTF_KEYUP;

    inputs[7].type = INPUT_KEYBOARD;
    inputs[7].ki.wVk = VK_CONTROL;
    inputs[7].ki.dwFlags = KEYEVENTF_KEYUP;

    




    UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
    if (uSent != ARRAYSIZE(inputs))
    {
        //OutputString(L"SendInput failed: 0x%x\n", HRESULT_FROM_WIN32(GetLastError()));
    } 
}



int main()
{
    Sleep(3000);;
    keyStroke();
}
