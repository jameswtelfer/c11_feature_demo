//
// Created by James Telfer on 30/07/2017.
//

#include <memory>
#include "DynamicMemory.h"

void DynamicMemory::uniquePointers() {
    const std::unique_ptr<Thing> thing(new Thing("unique_ptr Thing that gets deleted at the end of the function"));

    std::unique_ptr<Thing> unmanagedThing(new Thing("unique_ptr that will get deleted manually"));
    auto manualPtr = unmanagedThing.release();
    delete manualPtr;

    std::unique_ptr<Thing> thing1(new Thing("objects are deleted when new assignments are made to the pointer"));
    thing1 = std::unique_ptr<Thing>(new Thing("new object"));

    std::unique_ptr<Thing> thingToOutput(
            new Thing("Unique pointers can be dereferenced as normal, and get gives the raw pointer"));
    std::cout << *thingToOutput << std::endl;
    outputThing(thingToOutput.get());

    std::unique_ptr<Thing> emptyThing;
    if (!emptyThing) {
        std::cout << "Boolean check indicates if pointer is valid (i.e. not null)";
    }

    outputThing(uniquePtrMember.get());
}

void DynamicMemory::outputThing(const Thing *const thing) const {
    std::cout << *thing << std::endl;
}

void DynamicMemory::outputSharedPtr(const std::shared_ptr<Thing> thing) const {
    std::cout << *thing << std::endl;
}

void DynamicMemory::sharedPointers() {
    const std::shared_ptr<Thing> thing(new Thing("like unique pointers, but with reference counts and can be copied"));
    outputSharedPtr(thing);

    const std::shared_ptr<Thing> thingToOutput(new Thing("get also returns the raw pointer"));
    outputThing(thingToOutput.get());

    std::shared_ptr<Thing> emptyThing;
    if (!emptyThing) {
        std::cout << "Boolean check indicates if pointer is valid (i.e. not null)";
    }

    outputSharedPtr(sharedPtrMember);
}

void DynamicMemory::makeShared() {
    auto sharedThing = std::make_shared<Thing>("Use make_shared for safer construction (avoids bad things if errors occur)");
    outputSharedPtr(sharedThing);
}

DynamicMemory::DynamicMemory()
        : uniquePtrMember(new Thing("Unique pointers live until they are no longer in scope")),
          sharedPtrMember(new Thing(
                  "Shared pointers live until the reference count is zero.  Reference count is decremented in the destructor")) {

}
