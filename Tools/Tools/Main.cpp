#include "adb.h"
#include "mainscreen.h"

int main()
{
    Board B;
    ADB A1;
    if (!getcondition())
        std::cout << "Dependencies found" << std::endl;
    else {
        std::cout << "Dependency missing... Program will terminate";
        system("PAUSE");
        return 0;
    }

    B.Draw(); //draw board
    if (!getcondition()) {
        system("PAUSE");
        return 0;
    }

    system("PAUSE");
}