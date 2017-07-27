//
// Created by James Telfer on 26/07/2017.
//

#include "ForLoops.h"
#include <iostream>

void ForLoops::vectorRangeForLoop() {
    std::cout << "Vector-based range for loop" << std::endl;

    for(auto i : v)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
}

void ForLoops::initializerListForLoop() {
    std::cout << "Array-based ranged for loop" << std::endl;

    for (auto i : {1,2,3,4,5,6,7,8,9})
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
}

void ForLoops::arrayForLoop() {
    std::cout << "array range for loop" << std::endl;

    int a[] = {1,2,3,4,5,6,7,8,9};

    for (auto i : a)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
}

void ForLoops::referenceParameterForLoop() {
    std::cout << "reference loop parameter for loop" << std::endl;

    for(auto& i : v)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
}

