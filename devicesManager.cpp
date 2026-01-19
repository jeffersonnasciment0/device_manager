#include "devicesManager.hpp"
#include <vector>
#include <algorithm>
#include <iostream>

DevicesManager::DevicesManager():
    devicesList(0)
{
}

void DevicesManager::addDevice(Device& device) 
{
    std::cout << "Adding device: " << device.getName() << " ID: " << device.getId() << std::endl;    
    devicesList.push_back(&device);
}


void DevicesManager::removeDevice(int deviceId)
{
    for (const auto* device : devicesList)
    {
        if (device->getId() == deviceId)
        {
            std::cout << "Removing device: " << device->getName() << " ID: " << device->getId() << std::endl;
            devicesList.erase(std::remove(devicesList.begin(), devicesList.end(), device), devicesList.end());
            break;
        }
    }    
}


Device* DevicesManager::getDevice(int deviceId) const
{
    for (const auto& device : devicesList)
    {
        if (device->getId() == deviceId)
        {
            return device;
        }
    }
    return nullptr;
}


std::string DevicesManager::listDevices()
{
    std::string list;
    list += "------------LIST DEVICES--------------\n";
    for (const auto* device : devicesList)
    {
        list += "Device Name: " + device->getName() + " | ID: " + std::to_string(device->getId()) + " | Status: " + std::to_string((int)device->getStatus()) + "\n";
    }
    return list;
}


std::string DevicesManager::listDevicesStatus(DeviceStatus status) const
{
    std::string list;
    int contDevice = 0;
    list += "--------LIST DEVICES STATUS----------\n";
    for (const auto* device : devicesList)
    {
        if (device->getStatus() == status)
        {
            contDevice += 1;
            list += "Device: " + device->getName() + " | ID: " + std::to_string(device->getId()) + " | Status: " + std::to_string((int)device->getStatus()) + "\n";
        }        
    }
    if (contDevice == 0)
    {
        list += "No devices found with the specified status(" + std::to_string((int)status) + ").\n";
    }
    
    return list;
}

// DevicesManager does NOT own Device objects
DevicesManager::~DevicesManager() {}