#pragma once
#include <WinSock2.h>
#include <ws2bth.h>
#include <stdio.h>
class Device
{
public:
    LPWSAQUERYSET pwsaResults{};
    SOCKADDR_BTH pBtSockRemote{};
    char    buffer[4096] = {};
    DWORD   swSize = sizeof(buffer);

    Device();

    INT getDeviceInfo(HANDLE hLookup, DWORD dwControlFlags);

    void printDeviceInfo();
};