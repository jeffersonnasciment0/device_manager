#include <iostream>
#include <string>
#include "device.hpp"

using namespace std;

int main(){
    cout << "Teste\n";

    Device disp1("tv");
    cout << "Id do dispositivo " << disp1.getName() << " criado: " << disp1.getId() << endl;
    cout << "Status do dispositivo " << disp1.getName() << " criado: " << (int)disp1.getStatus() << endl;
    disp1.changeStatus(DeviceStatus::ACTIVE);
    cout << "Status do dispositivo " << disp1.getName() << " criado: " << (int)disp1.getStatus() << endl;
    return 0;
}