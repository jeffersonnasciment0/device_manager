#include <iostream>
#include "device.hpp"

int Device::id = 0;
Device::Device(std::string name): 
    name(name),
    status(DeviceStatus::INACTIVE)
{
    id++;
}

Device::~Device()
{
    id--;
}

int Device::getId()
{
    return id;
}

std::string Device::getName() const
{
    return name;
}

DeviceStatus Device::getStatus()
{
    return status;
}

void Device::changeStatus(DeviceStatus newStatus)
{
    status = newStatus;
}