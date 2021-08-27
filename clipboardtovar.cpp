#define UNICODE
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;






int main() {

HANDLE clip;
        
    if (OpenClipboard(NULL)) {
      clip = GetClipboardData(CF_TEXT);
      CloseClipboard();
    }

    string text1;
    text1 = (char*)clip;
    
    cout << text << endl;

    
    

}