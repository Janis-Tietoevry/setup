
#include "Team2LineCounter.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>


Team2LineCounter::Team2LineCounter()
{
    /*std::ifstream f;
    f.open("TEST_SOURCE.txt");
    std::stringstream buffer;
    buffer << f.rdbuf();
    std::string fileContents = buffer.str();*/
    // Open file
    // Different function which receives the vector
    // Vector function only counts code lines
}

// Taken from https://stackoverflow.com/questions/216823/how-to-trim-a-stdstring
inline std::string trim(std::string& str)
{
    str.erase(str.find_last_not_of(' ')+1);         //suffixing spaces
    str.erase(0, str.find_first_not_of(' '));       //prefixing spaces
    return str;
}

const int Team2LineCounter::CountLines(std::vector<std::string> content) const
{
    int lineCount = 0;

    for (auto &a : content) {
        a = trim(a);

        if (a.empty())
            continue;

        if (a.find("#include") != a.npos)
            continue;

        if (a.find("using namespace") != a.npos)
            continue;

        if (a.rfind("//", 0) == 0)  // for '//' comments
            continue;

        ++lineCount;
    }

    return lineCount;
}
