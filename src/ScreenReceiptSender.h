//
// Created by Angelo on 17/9/2020.
//

#ifndef MY_PROJECT_NAME_SCREENRECEIPTSENDER_H
#define MY_PROJECT_NAME_SCREENRECEIPTSENDER_H


#include "IReceiptSender.h"

class ScreenReceiptSender: public IReceiptSender {
    std::string sendReceipt() override;
};


#endif //MY_PROJECT_NAME_SCREENRECEIPTSENDER_H
