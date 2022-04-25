
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


const int Team2LineCounter::CountLines(std::vector<std::string> content) const
{
    int lineCount = 0;

    for (auto &a : content) {
        ++lineCount;
    }

    return lineCount;
}
