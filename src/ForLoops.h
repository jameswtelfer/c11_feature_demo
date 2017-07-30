//
// Created by James Telfer on 26/07/2017.
//

#ifndef C_11_FEATURE_DEMO_FORLOOPS_H
#define C_11_FEATURE_DEMO_FORLOOPS_H

#include <vector>
#include "Thing.h"

class ForLoops {
public:
    void vectorRangeForLoop();
    void initializerListForLoop();
    void arrayForLoop();
    void referenceParameterForLoop();

private:
    std::vector<Thing> v{Thing("1"),Thing("2"),Thing("3"),Thing("4"),Thing("5"),Thing("6"),Thing("7"),Thing("8"),Thing("9")};
};


#endif //C_11_FEATURE_DEMO_FORLOOPS_H
