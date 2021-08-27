#define UNICODE
#include <iostream>
#include <windows.h>
#include <string>

void switchToTerminal() {
HWND hWnd = ::FindWindow(NULL, L"Untitled - Notepad");
if (hWnd) {
    // move to foreground
    ::SetForegroundWindow(hWnd);
}

}

int main () {
    switchToTerminal();

}