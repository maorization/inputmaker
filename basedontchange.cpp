#define UNICODE
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

string shlomo[] = {"david", "itzik"};

int intInput[] = { 1, 2, 3, 4, 5 }; 
void printINT(const int &i) {
    std::cout << i << ' ';
}
 
void printSTR(const string &i) {
    std::cout << i << ' ';
}


int main()
{
 // printINT(intInput[3]);
printSTR(shlomo[1]);

}