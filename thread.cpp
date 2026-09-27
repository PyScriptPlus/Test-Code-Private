#include <iostream>
#include <thread>
#include <chrono>

void task(int x){
    std::cout << "Start: " << x << '\n';
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "Stop: " << x << '\n';
}

int main() {

    std::thread t1(task, 12);
    std::thread t2(task, 13);

    t1.join();
    t2.join();

    return 0;
}