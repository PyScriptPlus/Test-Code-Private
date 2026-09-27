#include <winsock2.h>
#include <iostream>

#pragma comment(lib,"ws2_32.lib")

int main() {

    WSADATA wsa;
    WSAStartup(MAKEWORD(2,2), &wsa);

    SOCKET s = socket(AF_INET, SOCK_DGRAM, 0);

    sockaddr_in addr{};
    addr.sin_family = AF_INET;
    addr.sin_port = htons(9000);
    addr.sin_addr.s_addr = inet_addr("127.0.0.1");

    sendto(s, "Hello", 5, 0, (sockaddr*)&addr, sizeof(addr));

    std::cout << "sent\n";

    closesocket(s);
    WSACleanup();
}
