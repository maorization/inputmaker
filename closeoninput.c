#include <iostream>
#include <Windows.h>
#include <stdio.h>

int main(){
    while (true) {
        if (GetAsyncKeyState(VK_SPACE)) {
            return 0;
        }
    }
}
