/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Victo
 *
 * Created on January 12, 2020, 12:11 AM
 * 
 * Write a program that will compute the total sales tax on a $95 purchase. Assume the
 * state sales tax is 4 percent and the county sales tax is 2 percent. 
 * 
 */

#include <cstdlib>
#include <iostream>
double stateTax = 0.04;
double countyTax = 0.02;
double purchase  = 95.0;
int main(int argc, char** argv) {
    std::cout << "Purchase: $" << purchase << std::endl;
    purchase += purchase * stateTax;
    std::cout << "Purchase after State Tax: $" << purchase << std::endl;
    purchase += purchase * countyTax;
    std::cout << "Purchase after County Tax: $" << purchase << std::endl;
    return 0;
}

