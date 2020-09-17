//
// Created by Angelo on 17/9/2020.
//

#ifndef MY_PROJECT_NAME_IREPLACEABLE_H
#define MY_PROJECT_NAME_IREPLACEABLE_H

#include <string>

class IReplaceable {
public:
    virtual ~IReplaceable();

private:
    virtual std::string processMessage() = 0;
};


#endif //MY_PROJECT_NAME_IREPLACEABLE_H
