#define UNICODE
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

   void SetNumLock()
   {
    keybd_event(VkKeyScan('A'),0x9e,0 , 0); // ‘A’ Press
    keybd_event(VkKeyScan('A'),0x9e, KEYEVENTF_KEYUP,0); // ‘A’ Release
   }

int main() {
    
    Sleep(3000);
    SetNumLock();
    cout << "test" << endl;

}