#include "adb.h"
ADB::ADB()
{
    for (int i = 0; i < types::filenames.size(); i++) {
        setcondition(false);
        if (!fs::exists(types::filenames[i])) {
            setcondition(true);
            break;
        }
    }
}
void get_devices()
{
    system("cd dependencies & adb devices");
}
void push_file()
{
    std::string command = "cd dependencies & adb push ", path_on_device, path_on_pc;
    std::cout << "Enter path to file on pc: ";
    std::cin >> path_on_pc;
    command += path_on_pc;
    std::cout << std::endl;
    std::cout << "Enter path on device: ";
    std::cin >> path_on_device;
    std::cout << std::endl;
    command += " " + path_on_device;
    system(command.c_str());
    std::cin.ignore();
}
void pull_file()
{
    std::string command = "cd dependencies & adb pull ", path_on_device, path_on_pc;
    std::cout << "Enter path on device: ";
    std::cin >> path_on_device;
	command += " " + path_on_device;

	std::cout << std::endl;
    std::cout << "Enter path to file on pc: ";
    std::cin >> path_on_pc;
    command += path_on_pc;
    std::cout << std::endl;

    system(command.c_str());
    std::cin.ignore();
}
void reboot_to_fastboot()
{
    system("cd dependecies & adb reboot bootloader");
}