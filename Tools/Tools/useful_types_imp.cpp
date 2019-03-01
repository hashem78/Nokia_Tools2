#include "useful_types.h"
namespace types {
bool condition = false;
std::vector<std::string> filenames = { "dependencies/adb.exe", "dependencies/fastboot.exe" };
std::vector<std::string> options = 
{
"Start Adb daemon", 
"Get list of devices",
"Push files to device",
"Pull files from device"};
std::vector<unsigned int> valid={0,1,2,3};
}

void setcondition(const bool& x)
{
    types::condition = x;
}
bool getcondition()
{
    return types::condition;
}
bool isValid(const int& x)
{
    if (x == -1) {
        setcondition(false);
        return true;
    }
    bool check = false;
    if (std::cin.good() == false) //check if istream has correct input
    {
        std::cin.clear(); //thanks stackoverflow :)
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return check;
    }
    for (int i = 0; i < types::valid.size(); i++)
        if (x == types::valid[i])
            check = true;
    return check;
}
