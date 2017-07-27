//
// Created by James Telfer on 26/07/2017.
//

#ifndef C_11_FEATURE_DEMO_FORLOOPS_H
#define C_11_FEATURE_DEMO_FORLOOPS_H

#include <vector>

class ForLoops {
public:
    void vectorRangeForLoop();
    void initializerListForLoop();
    void arrayForLoop();
    void referenceParameterForLoop();

private:
    std::vector<int> v{1,2,3,4,5,6,7,8,9};
};


#endif //C_11_FEATURE_DEMO_FORLOOPS_H
