#include <iostream>
#include <vector>
#include "device.hpp"

class devicesManager
{
private:
    std::vector<Device> devicesList;
public:
    devicesManager();
    ~devicesManager();

    void addDevice(const Device& device);
    void removeDevice(int deviceId);
    Device* getDevice(int deviceId);
    std::string listDevices();
};


