/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Victo
 *
 * Created on January 12, 2020, 12:30 AM
 * To get the average of a series of values, you add the values up and then divide the sum
* by the number of values. Write a program that stores the following values in five different variables: 28, 32, 37, 24, and 33. The program should first calculate the sum
of these five variables and store the result in a separate variable named sum. Then, the
program should divide the sum variable by 5 to get the average. Display the average
on the screen. 
 */

#include <cstdlib>
#include <iostream>
/*
 * 
 */

int x1 = 28;
int x2 = 32;
int x3 = 37;
int x4 = 24;
int x5 = 33;
int main(int argc, char** argv) {
    int sum = x1 + x2 + x3+ x4 + x5;
    std::cout << "Average: " << sum / 5 << std::endl;
    return 0;
}

