
#include "src/ForLoops.h"
#include "src/DynamicMemory.h"

int main(int argc, const char * argv[]) {
    ForLoops forLoops;
    forLoops.arrayForLoop();
    forLoops.initializerListForLoop();
    forLoops.vectorRangeForLoop();
    forLoops.referenceParameterForLoop();

    DynamicMemory dynamicMemory;
    dynamicMemory.uniquePointers();
    dynamicMemory.sharedPointers();
    dynamicMemory.makeShared();

    return 0;
}