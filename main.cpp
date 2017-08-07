
#include "src/ForLoops.h"
#include "src/DynamicMemory.h"
#include "src/Lambdas.h"
#include "src/NullPtr.h"

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

    Lambdas lambdas;
    lambdas.lambdasWithNoCaptures();
    lambdas.lambdasWithCaptures();
    lambdas.lambdasWithStdAlgorithm();
    lambdas.passingLambdasToFunctions();

    NullPtr nulls;
    nulls.compareNullptrToNull();

    return 0;
}