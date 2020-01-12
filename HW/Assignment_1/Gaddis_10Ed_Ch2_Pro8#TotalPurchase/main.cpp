/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Victo
 *
 * Created on January 12, 2020, 3:31 AM
 * 
 * A customer in a store is purchasing five items. The prices of the five items are
Price of item 1 = $15.95
Price of item 2 = $24.95
Price of item 3 = $6.95
Price of item 4 = $12.95
Price of item 5 = $3.95

Write a program that holds the prices of the five items in five variables. Display each
item’s price, the subtotal of the sale, the amount of sales tax, and the total. Assume the
sales tax is 7%. 
 */

#include <cstdlib>
#include <iostream>

double i1 = 15.95;
double i2 = 24.95;
double i3 = 6.95;
double i4 = 12.95;
double i5 = 3.95;

double tax = 0.07;
double taxAmount = 0;
double total = 0;
int main(int argc, char** argv) {
    std::cout << "Item 1: $" << i1 << std::endl; 
    std::cout << "Item 2: $" << i2 << std::endl; 
    std::cout << "Item 3: $" << i3 << std::endl; 
    std::cout << "Item 4: $" << i4 << std::endl; 
    std::cout << "Item 5: $" << i5 << std::endl; 
    
    total = i1 + i2 + i3 + i4 + i5;
    
    std::cout << "Subtotal: $" << total << std::endl; 
    
    taxAmount = total * tax;
    
    std::cout << "Tax: $" << taxAmount << std::endl;
    total += taxAmount;
    std::cout << "Total: $" << total << std::endl;
    return 0;
}

