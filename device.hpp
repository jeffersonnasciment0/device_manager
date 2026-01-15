#pragma once
#include <string>

enum class DeviceStatus {
    ACTIVE,
    INACTIVE,
    MAINTENANCE
};


class Device
{
private:
    int id;
    static int nextId;
    std::string name;
    DeviceStatus status;

public:
    Device();
    Device(std::string name);
    int getId() const;
    std::string getName() const;
    DeviceStatus getStatus();
    void changeStatus(DeviceStatus status);
    virtual ~Device();
};

