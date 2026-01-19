#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include "device.hpp"

class DevicesManager
{
private:
    std::vector<Device*> devicesList;
public:
    DevicesManager();
    ~DevicesManager();

    void addDevice(Device& device);
    void removeDevice(int deviceId);
    Device* getDevice(int deviceId) const;
    std::string listDevices();
    std::string listDevicesStatus(DeviceStatus status) const;
};


