/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Victo
 *
 * Created on January 12, 2020, 3:24 AM
 * 
 * 
 * Suppose an employee gets paid every two weeks and earns $2,200 each pay period.
In a year the employee gets paid 26 times. Write a program that defines the following
variables:
payAmount This variable will hold the amount of pay the employee earns each
pay period. Initialize the variable with 2200.0.
payPeriods This variable will hold the number of pay periods in a year. Initialize
the variable with 26.
annualPay This variable will hold the employee’s total annual pay, which will
be calculated.
The program should calculate the employee’s total annual pay by multiplying the
employee’s pay amount by the number of pay periods in a year and store the result in
the annualPay variable. Display the total annual pay on the screen. 
 */

#include <cstdlib>
#include <iostream>

/*
 * 
 */

double payAmount = 2200.0;
int    payPeriods = 26;
double annualPay = 0;
int main(int argc, char** argv) {
    
    annualPay = payAmount * payPeriods;
    
    std::cout << "Annual Pay: $" << annualPay << std::endl;
    return 0;
}

