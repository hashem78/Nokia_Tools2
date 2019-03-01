#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
/*
		check dependencies -> filenames,valid
		bool codition -> to get condition of application (exit or missin dep)
		setcondtion
		getcondtion -> returns false if a dependency is missing

*/
bool isValid(const int&);
void setcondition(const bool&);
bool getcondition();

namespace types {
extern bool condition;
extern std::vector<std::string> filenames;
extern std::vector<std::string> options;
extern std::vector<unsigned int> valid;
}