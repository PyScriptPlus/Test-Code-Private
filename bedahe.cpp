#include <iostream>
#define WINVER 0x0605
#include <Windows.h>
#include <WinUser.h>


void clockLocal()
{
    SYSTEMTIME times;
    GetLocalTime(&times);

    std::cout << "Hour: " << times.wHour << " : " << 
            times.wMinute << " : " << times.wSecond << '\n';
    return;
}

int main() {

    clockLocal();

    
    HWND hwnd;
    
    MessageBox(nullptr, TEXT("Hello"),TEXT("Meesage"), MB_TOPMOST);
    // int dpi = GetDpiForWindow(GetConsole());
    // std::cout << dpi << '\n';
    
    std::cin.get();
    return 0;
}