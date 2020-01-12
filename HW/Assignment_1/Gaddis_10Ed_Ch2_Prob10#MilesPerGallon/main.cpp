/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Victo
 *
 * Created on January 12, 2020, 3:39 AM
 * 
 * A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a
program that calculates the number of miles per gallon the car gets. Display the result
on the screen.
Hint: Use the following formula to calculate miles per gallon (MPG):
 MPG  Miles Driven/Gallons of Gas Used 
 */

#include <cstdlib>
#include <iostream>

int gals = 15;
int distance = 375;
int main(int argc, char** argv) {
    int mpg = distance / gals;
    std::cout << "MPG: " << mpg << std::endl;
    return 0;
}

