#include "devicesManager.hpp"
#include <vector>
#include <algorithm>
#include <iostream>

devicesManager::devicesManager():
    devicesList(0)
{
}

void devicesManager::addDevice(Device& device) 
{
    std::cout << "Adding device: " << device.getName() << " ID: " << device.getId() << std::endl;    
    devicesList.push_back(&device);
}

void devicesManager::removeDevice(int deviceId)
{
    for (const auto &device : devicesList)
    {
        if (device->getId() == deviceId)
        {
            std::cout << "Removing device: " << device->getName() << " ID: " << device->getId() << std::endl;
            devicesList.erase(std::remove(devicesList.begin(), devicesList.end(), device), devicesList.end());
            break;
        }
    }    
}


Device* devicesManager::getDevice(int deviceId)
{
    for (const auto &device : devicesList)
    {
        if (device->getId() == deviceId)
        {
            return device;
        }
    }
    return nullptr;
}

std::string devicesManager::listDevices()
{
    std::string list;
    list += "------------LIST DEVICES--------------\n";
    for (const auto &device : devicesList)
    {
        list += "Device Name: " + device->getName() + " | ID: " + std::to_string(device->getId()) + " | Status: " + std::to_string((int)device->getStatus()) + "\n";
    }
    return list;
}

std::string devicesManager::listDevicesStatus(const DeviceStatus status)
{
    std::string list;
    int contDevice = 0;
    list += "--------LIST DEVICES STATUS----------\n";
    for (const auto &device : devicesList)
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

devicesManager::~devicesManager()
{
}