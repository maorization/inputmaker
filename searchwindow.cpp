#define UNICODE
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;


void findWindow() {
    HWND hWnd = ::FindWindow(NULL, L"Untitled - Notepad");
                while (hWnd == NULL) {
                hWnd = FindWindow(NULL, L"Untitled - Notepad");
                std::cout << "Start notepad" << std::endl;
                Sleep(1000);
            }
}

int main() {

    findWindow();
}