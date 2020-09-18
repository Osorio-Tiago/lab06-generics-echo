//
// Created by Angelo on 17/9/2020.
//

#ifndef MY_PROJECT_NAME_EMAILRECEIPTSENDER_H
#define MY_PROJECT_NAME_EMAILRECEIPTSENDER_H

#include "IReceiptSender.h"

class EmailReceiptSender : public IReceiptSender {
    std::string sendReceipt() override;
};


#endif //MY_PROJECT_NAME_IRECEIPTSENDER_H