//
// Created by James Telfer on 07/08/2017.
//

#include <iostream>
#include "NullPtr.h"

void NullPtr::compareNullptrToNull() const {
    if(NULL == nullptr) {
        std::cout << "NULL is equal to nullptr" << std::endl;
    }
}
