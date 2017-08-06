//
// Created by James Telfer on 31/07/2017.
//

#include <iostream>
#include "Lambdas.h"

void Lambdas::lambdasWithNoCaptures() {
    auto voidReturn = [](std::string message){ std::cout << message << std::endl;};
    voidReturn("This is a simple lambda with a single parameter and no captures and returns void");

    auto lambdaWithAutoReturnType = [](int valueToIncrement){ return valueToIncrement + 1;};
    int baseValue = 100;
    std::cout << "Value before lambda call: " << baseValue << std::endl;
    std::cout << "Value returned from lambda call: " << lambdaWithAutoReturnType(baseValue) << std::endl;

    auto lambdaWithSpecificReturnType = []() -> std::string { return "Return type can be specified explitly"; };
    std::cout << lambdaWithSpecificReturnType() << std::endl;
}

void Lambdas::lambdasWithCaptures() {
    std::string message("Message defined within parent function");
    int baseValue = 3000;

    auto lambdaCapturingSpecificVariableByCopy = [message](){ std::cout << "Capture variables explicitly by copy: " << message << std::endl; };
    lambdaCapturingSpecificVariableByCopy();

    auto lambdaCapturingSpecificVariableByReference = [&baseValue](){ baseValue+=1;};
    std::cout << "Value before calling lambda: " << baseValue << std::endl;
    lambdaCapturingSpecificVariableByReference();
    std::cout << "Value after calling lambda: " << baseValue << std::endl;

    auto lambdaCapturingAllVariablesByCopy = [=](){
        std::cout << "All variables in scope can be captured by copy: " << std::endl;
        std::cout << "\t" << message << std::endl;
        std::cout << "\t" << baseValue << std::endl;
    };
    lambdaCapturingAllVariablesByCopy();

    auto lambdaCapturingAllVariablesByReference = [&](){
        message = "A new message from within the lambda function";
        baseValue *= 2;
    };
    lambdaCapturingAllVariablesByReference();
    std::cout << "All variables in scope can be captured by reference:" << std::endl;
    std::cout << "\t" << message << std::endl;
    std::cout << "\t" << baseValue << std::endl;
}

void Lambdas::lambdasWithStdAlgorithm() {
    std::list<std::string> stringList{"First", "Second", "Third", "Last"};

    auto printStringItem = [](const std::string& item){
        std::cout << "Item value: " << item << std::endl;
    };

    std::cout << "Items in list of strings written out via std::for_each() and a lambda:" << std::endl;

    std::for_each(stringList.begin(), stringList.end(), printStringItem);

}

void Lambdas::printItems(std::function<void(const std::string &)> f, const std::list<std::string> &items) const {
    std::cout << "Items in list of strings written out via passed function object" << std::endl;

    std::for_each(items.begin(), items.end(), std::move(f));
}

void Lambdas::passingLambdasToFunctions() {
    std::list<std::string> stringList{"First", "Second", "Third", "Last"};

    auto printStringItem = [](const std::string& item){
        std::cout << "Item value: " << item << std::endl;
    };

    printItems(printStringItem, stringList);
}
