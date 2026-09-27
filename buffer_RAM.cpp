#include <iostream>
#include <Windows.h>
#include <chrono>
#include <thread>
#include <ctime>

int main() {

    // time_t timestamp;
    // time(&timestamp);
    // std::cout << ctime(&timestamp) << '\n';

    std::cout << "Hello" << std::flush;
    std::this_thread::sleep_for(std::chrono::seconds(5));
    return 0;
}