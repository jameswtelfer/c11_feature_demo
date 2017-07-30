//
// Created by James Telfer on 30/07/2017.
//

#ifndef C_11_FEATURE_DEMO_THING_H
#define C_11_FEATURE_DEMO_THING_H


#include <string>
#include <iostream>

class Thing {
public:
    explicit Thing(const std::string&& id);

    void setID(const std::string&& newId);

    std::ostream& writeToOS(std::ostream& ostream) const;

private:
    std::string id;
};

std::ostream& operator<<(std::ostream& ostream, const Thing& thing);

#endif //C_11_FEATURE_DEMO_THING_H
