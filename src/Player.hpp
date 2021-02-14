/*
 * Created by Marcus Novoa & Brandon Olah
 * Last Updated: Feb 13, 2021
 *
 */
#ifndef PLAYER_HPP_
#define PLAYER_HPP_

#include "enums.hpp"
#include <iostream>
#include <string>

using namespace std;

class Player {
public:
    Player(string name, ColorEnum color);
    ~Player();
    ColorEnum color() const {return playerColor;};
    int score() const;
    bool wonColumn(int colNum) {return true;};
    ostream& print(ostream& out) const;

private:
    string playerName;
    ColorEnum playerColor;
    int playerScore = 0;
    int* scoreBoard = new int[3];

};

inline ostream& operator <<(ostream& out, Player& p) {
    return p.print(out);
}

#endif /* PLAYER_HPP_ */
