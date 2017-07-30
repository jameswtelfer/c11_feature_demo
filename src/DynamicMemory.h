//
// Created by James Telfer on 30/07/2017.
//

#ifndef C_11_FEATURE_DEMO_DYNAMICMEMORY_H
#define C_11_FEATURE_DEMO_DYNAMICMEMORY_H

#include <memory>
#include "Thing.h"

class DynamicMemory {
public:
    DynamicMemory();
    void uniquePointers();
    void sharedPointers();
    void makeShared();
private:
    void outputThing(const Thing* thing) const;
    void outputSharedPtr(std::shared_ptr<Thing> thing) const;

    std::unique_ptr<Thing> uniquePtrMember;
    std::shared_ptr<Thing> sharedPtrMember;
};


#endif //C_11_FEATURE_DEMO_DYNAMICMEMORY_H
