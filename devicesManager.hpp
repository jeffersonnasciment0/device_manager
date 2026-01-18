#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include "device.hpp"

class devicesManager
{
private:
    std::vector<Device*> devicesList;
public:
    devicesManager();
    ~devicesManager();

    void addDevice(Device& device);
    void removeDevice(int deviceId);
    Device* getDevice(int deviceId);
    std::string listDevices();
    std::string listDevicesStatus(const DeviceStatus status);
};


