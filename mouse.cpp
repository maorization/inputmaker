#define UNICODE
#include <iostream>
#include <windows.h>


void mouseClick(int x, int y) {

INPUT input;
input.type = INPUT_MOUSE;
input.mi.mouseData = 0;
input.mi.dx = x * (65536 / GetSystemMetrics(SM_CXSCREEN)); //x being coord in pixels
input.mi.dy =  y * (65536 / GetSystemMetrics(SM_CYSCREEN)); //y being coord in pixels
input.mi.dwFlags = MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE;
SendInput(1, &input, sizeof(input));
}


int main() {

mouseClick(22,900);

}