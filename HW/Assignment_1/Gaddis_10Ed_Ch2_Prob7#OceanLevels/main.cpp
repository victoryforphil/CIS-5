/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Victo
 *
 * Created on January 12, 2020, 3:29 AM
 * 
 * Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write
a program that displays:
• The number of millimeters higher than the current level that the ocean’s level will be
in 5 years
• The number of millimeters higher than the current level that the ocean’s level will be
in 7 years
• The number of millimeters higher than the current level that the ocean’s level will be
in 10 years 
 */

#include <cstdlib>
#include <iostream>

double riseAmount = 1.5;

int main(int argc, char** argv) {

    std::cout << "Rise Amount @ 5 years: " << riseAmount * 5 << std::endl;
    std::cout << "Rise Amount @ 7 years: " << riseAmount * 7 << std::endl;
    std::cout << "Rise Amount @ 10 years: " << riseAmount * 10 << std::endl;
    
    return 0;
}

