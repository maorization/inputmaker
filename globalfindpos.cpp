#define UNICODE
#include <iostream>
#include <windows.h>


int main()
{
    while (true) {
            
                POINT p;
                GetCursorPos(&p);
                // ScreenToClient(hWND, &p);
                std::cout << "x position: " << p.x << " | y position " << p.y << std::endl;
                Sleep(1000);



     }
}
