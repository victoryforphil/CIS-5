/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Victo
 *
 * Created on January 12, 2020, 12:08 AM
 * 
 * The East Coast sales division of a company generates 58 percent of total sales. Based
 *con that percentage, write a program that will predict how much the East Coast division
* will generate if the company has $8.6 million in sales this year. 
 */

#include <cstdlib>
#include <iostream>

double percentOfTotal = 0.58; //58% of sales
double totalSales     = 8600000; //8.6m in sales;

int main(int argc, char** argv) {
    int eastSales = totalSales * percentOfTotal; //Convert to int for ease of use
    
    std::cout << "East Sales: " << eastSales << std::endl;
    return 0;
}

