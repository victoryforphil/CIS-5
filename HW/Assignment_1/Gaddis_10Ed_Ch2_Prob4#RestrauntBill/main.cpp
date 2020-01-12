/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Victo
 *
 * Created on January 12, 2020, 12:17 AM
 * 
 * Write a program that computes the tax and tip on a restaurant bill for a patron with
 * a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should
 * be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip
 * amount, and total bill on the screen. 
 */

#include <cstdlib>
#include <iostream>

double mealCharge = 88.67;
double tax = 0.0675;
double tip = 0.2;

int main(int argc, char** argv) {
    std::cout << "Meal Cost: " << mealCharge << std::endl;
    double taxAmount = mealCharge * tax;
    mealCharge += taxAmount;
    std::cout << "Tax Amount: " << taxAmount << std::endl;
    
    double tipAmount = mealCharge * tip;
    mealCharge += tip;
    std::cout << "Tip Amount: " << tipAmount << std::endl;
    
    std::cout << "Total:  " << mealCharge << std::endl;
    return 0;
}

