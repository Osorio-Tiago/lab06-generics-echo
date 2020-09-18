//
// Created by Angelo on 17/9/2020.
//

#ifndef MY_PROJECT_NAME_IRECEIPTSENDER_H
#define MY_PROJECT_NAME_IRECEIPTSENDER_H
#include <iostream>
using namespace std;
#include <string>

class IReceiptSender {
public:
    virtual ~IReceiptSender();

    virtual std::string sendReceipt() = 0;
};

#endif //MY_PROJECT_NAME_IRECEIPTSENDER_H
