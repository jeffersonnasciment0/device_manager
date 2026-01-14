#include "devicesManager.hpp"

devicesManager::devicesManager()
{
    std::vector<Device> devicesList;
}

void devicesManager::addDevice(const Device& device) 
{
    devicesList.push_back(device);
}

void removeDevice(int deviceId)
{
    
}

devicesManager::~devicesManager()
{
}