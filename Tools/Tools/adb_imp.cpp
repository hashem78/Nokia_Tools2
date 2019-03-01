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