//
// Created by James Telfer on 31/07/2017.
//

#ifndef C_11_FEATURE_DEMO_LAMBDAS_H
#define C_11_FEATURE_DEMO_LAMBDAS_H

#include <string>
#include <list>
#include <functional>


class Lambdas {
public:
    void lambdasWithNoCaptures();
    void lambdasWithCaptures();
    void lambdasWithStdAlgorithm();
    void passingLambdasToFunctions();

private:
    void printItems(std::function<void(const std::string &)> f, const std::list<std::string> &items) const;
};


#endif //C_11_FEATURE_DEMO_LAMBDAS_H
