#include <iostream>
#include <string>
#include "device.hpp"
#include "devicesManager.hpp"

using namespace std;

int main(){
    cout << "Teste\n";

    Device disp1("tv");
    Device disp2("radio");
    Device disp3("mouse");
    Device disp4("keyboard");
    Device disp5("monitor");

    
    devicesManager manager;
    manager.addDevice(disp1);
    manager.addDevice(disp2);
    manager.addDevice(disp3);
    manager.addDevice(disp4);
    manager.addDevice(disp5);
    
    disp2.changeStatus(DeviceStatus::ACTIVE);
    disp4.changeStatus(DeviceStatus::MAINTENANCE);
    disp5.changeStatus(DeviceStatus::ACTIVE);

    cout << manager.listDevicesStatus(DeviceStatus::MAINTENANCE);

    manager.removeDevice(disp3.getId());

    cout << manager.listDevices();

    return 0;
}