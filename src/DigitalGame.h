//
// Created by Angelo on 17/9/2020.
//

#ifndef MY_PROJECT_NAME_DIGITALGAME_H
#define MY_PROJECT_NAME_DIGITALGAME_H


#include <sstream>
#include "Game.h"
#include "ISaveGame.h"
#include "IReplaceable.h"

class DigitalGame: public Game, public ISaveGame, public IReplaceable {
public:
    DigitalGame();

    DigitalGame(const std::string &name, double price, double tax, const std::string &filePath);

    const std::string &getFilePath() const;

    void setFilePath(const std::string &filePath);

    std::string toString() const override;

    std::string saveData() override;

    std::string processMessage() override;

private:
    std::string filePath;

    // methods
    double applyDiscount() const override;
};


#endif //MY_PROJECT_NAME_DIGITALGAME_H
