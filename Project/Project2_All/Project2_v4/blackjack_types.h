/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   blackjack_types.h
 * Author: Victo
 *
 * Created on February 15, 2020, 6:31 PM
 */

#ifndef BLACKJACK_TYPES_H
#define BLACKJACK_TYPES_H
#include <string>

struct player {
    bool isAi = true;
    bool isStay;
    bool isBust = false;
    short plydGms = 0;
    short stats [10][2]; // First Index is game # (max of 10), second index is array of stats (0 - result, 1 - score at this point)
    short score = 0;
    std::string name = "AI Player";
    short hand[21] = {0, 0, 0, 0,0,0}; // TODO: Convert to vector
};

#endif /* BLACKJACK_TYPES_H */

