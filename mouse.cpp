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


void mouseClick() {

    INPUT ip = {};

    ip.mi.dwFlags = (MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_LEFTDOWN);
    SendInput(1, &ip, sizeof(INPUT));

    Sleep(10);

    ip.mi.dwFlags = (MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_LEFTUP);
    SendInput(1, &ip, sizeof(INPUT));

}
int main() {

Sleep(3000);
mouseMove(22,900);
mouseClick();

}