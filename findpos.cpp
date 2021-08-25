#define UNICODE
#include <iostream>
#include <windows.h>


int main()
{
    while (true) {
        LPCWSTR window_title = L"Untitled - Notepad";
        HWND hWND = FindWindow(NULL, window_title);
            while (hWND == NULL) {
                hWND = FindWindow(NULL, window_title);
                std::cout << "Start notepad" << std::endl;
                Sleep(1000);
            }
            

            
                POINT p;
                GetCursorPos(&p);
                ScreenToClient(hWND, &p);
                std::cout << "x position: " << p.x << " | y position " << p.y << std::endl;
                Sleep(1000);



     }
}
