#define UNICODE
#include <iostream>
#include <windows.h>


void mouseMove(int x, int y) {

INPUT input;
input.type = INPUT_MOUSE;
input.mi.mouseData = 0;
input.mi.dx = x * (65536 / GetSystemMetrics(SM_CXSCREEN)); //x being coord in pixels
input.mi.dy =  y * (65536 / GetSystemMetrics(SM_CYSCREEN)); //y being coord in pixels
input.mi.dwFlags = MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE;
SendInput(1, &input, sizeof(input));
}


void LeftMouseClick() {

    INPUT ip = {};

    ip.mi.dwFlags = (MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_LEFTDOWN);
    SendInput(1, &ip, sizeof(INPUT));

    Sleep(10);

    ip.mi.dwFlags = (MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_LEFTUP);
    SendInput(1, &ip, sizeof(INPUT));

}
void RightMouseClick() {

    INPUT ip = {};

    ip.mi.dwFlags = (MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_RIGHTDOWN);
    SendInput(1, &ip, sizeof(INPUT));

    Sleep(10);

    ip.mi.dwFlags = (MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_RIGHTUP);
    SendInput(1, &ip, sizeof(INPUT));

}


void LoopAll() {

mouseMove(782,963);
Sleep(10);
LeftMouseClick();
Sleep(10);
mouseMove(845,966);
Sleep(10);
LeftMouseClick();
Sleep(10);
mouseMove(904,973);
Sleep(10);
LeftMouseClick();
Sleep(10);
mouseMove(1069,969);
Sleep(10);
LeftMouseClick();

}

int main() {

    while (true) {
        if (GetAsyncKeyState(VK_SPACE)) {
            LoopAll();
        }
    }

}