//
// Created by Angelo on 17/9/2020.
//

#ifndef MY_PROJECT_NAME_GAMEMANAGER_H
#define MY_PROJECT_NAME_GAMEMANAGER_H

#include <sstream>
#include "IReceiptSender.h"
#include "ISaveGame.h"

class GameManager {
public:
    void save(ISaveGame* saveGame, const std::string &filename);
    std::string read(const std::string &filename);
    std::string purchase (IReceiptSender* receiptSender);
};


#endif //MY_PROJECT_NAME_GAMEMANAGER_H
