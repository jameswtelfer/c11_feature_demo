//
// Created by James Telfer on 30/07/2017.
//

#include "Thing.h"

Thing::Thing(const std::string &&id)
        : id(id) {

}

std::ostream &Thing::writeToOS(std::ostream &ostream) const {
    ostream << "Thing: " << id;
    return ostream;
}

void Thing::setID(const std::string &&newId) {
    id = newId;
}

std::ostream& operator<<(std::ostream & ostream, const Thing& thing) {
    thing.writeToOS(ostream);
    return ostream;
}
