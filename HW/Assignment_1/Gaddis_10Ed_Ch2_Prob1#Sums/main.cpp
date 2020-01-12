/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Victo
 *
 * Created on January 11, 2020, 9:31 PM
 */
/*
 Write a program that stores the integers 50 and 100 in variables, and stores the sum of
these two in a variable named total . 
 */

#include <cstdlib>
#include <iostream>
/*
 * 
 */
int main(int argc, char** argv) {

    int a = 50;
    int b = 100;
    int total = a + b;
    
    std::cout << "Total (a+b) = " << total << std::endl;
    return 0;
}

