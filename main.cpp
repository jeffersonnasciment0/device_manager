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

    devicesManager manager;
    manager.addDevice(disp1);
    manager.addDevice(disp2);
    manager.addDevice(disp3);

    return 0;
}