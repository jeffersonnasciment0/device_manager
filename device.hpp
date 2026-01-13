#include <string>

enum class DeviceStatus {
    ACTIVE,
    INACTIVE,
    MAINTENANCE
};


class Device
{
private:
    static int id;
    std::string name;
    DeviceStatus status;

public:
    Device(std::string name);
    int getId();
    std::string getName() const;
    DeviceStatus getStatus();
    void changeStatus(DeviceStatus status);
    virtual ~Device();
};

