#include <iostream>
#include "src/ForLoops.h"

int main(int argc, const char * argv[]) {
    std::cout << "Trying out some different for loops" << std::endl;

    ForLoops forLoops;

    forLoops.arrayForLoop();
    forLoops.initializerListForLoop();
    forLoops.vectorRangeForLoop();
    forLoops.referenceParameterForLoop();

    return 0;
}