#include <iostream>
#include "device.hpp"

int Device::nextId = 0;
Device::Device(std::string name): 
    name(name),
    status(DeviceStatus::INACTIVE)
{
    id = nextId++;
    std::cout << "----------------------------------" << std::endl;
    std::cout << "Creating device: " << name << std::endl;
    std::cout << "Initial status: " << (int)status << std::endl;
    std::cout << "Assigned ID: " << id << std::endl;
    std::cout << "----------------------------------" <<  std::endl;
}

Device::~Device()
{
}

int Device::getId() const
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