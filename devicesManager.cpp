#include "devicesManager.hpp"
#include <vector>
#include <algorithm>
#include <iostream>

devicesManager::devicesManager():
    devicesList(0)
{
}

void devicesManager::addDevice(const Device& device) 
{
    std::cout << "Adding device: " << device.getName() << " ID: " << device.getId() << std::endl;    
    devicesList.push_back(std::make_unique<Device>(device));
}

void devicesManager::removeDevice(int deviceId)
{
    for (const auto &device : devicesList)
    {
        if (device->getId() == deviceId)
        {
            std::cout << "Removing device: " << device->getName() << " ID: " << device->getId() << std::endl;
            // devicesList.erase(std::find(devicesList.begin(), devicesList.end(), device));
            break;
        }
    }    
}

devicesManager::~devicesManager()
{
}