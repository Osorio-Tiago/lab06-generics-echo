//
// Created by Angelo on 17/9/2020.
//

#ifndef MY_PROJECT_NAME_ISAVEGAME_H
#define MY_PROJECT_NAME_ISAVEGAME_H

#include <sstream>

class ISaveGame {
public:
    virtual ~ISaveGame();

    virtual std::string saveData() = 0;
};


#endif //MY_PROJECT_NAME_ISAVEGAME_H
