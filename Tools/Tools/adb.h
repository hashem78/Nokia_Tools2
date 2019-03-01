#include "useful_types.h"
namespace fs = std::filesystem;
class ADB {
public:
    ADB();
};
void get_devices();
void push_file();
void pull_file();