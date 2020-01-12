/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Victo
 *
 * Created on January 12, 2020, 3:36 AM
 * 
 * You have been given a job as a programmer on a Cyborg supercomputer. In order to
accomplish some calculations, you need to know how many bytes the following data
types use: char, int, float, and double. You do not have any manuals, so you can’t
look this information up. Write a C++ program that will determine the amount of
memory used by these types and display the information on the screen. 
 */

#include <cstdlib>
#include <iostream>



int main(int argc, char** argv) {
    std::cout << "Char size in bytes: " <<sizeof(char) << std::endl;
    std::cout << "Int size in bytes: " <<sizeof(int) << std::endl;
    std::cout << "Float size in bytes: "<< sizeof(float) << std::endl;
    std::cout << "Double size in bytes: "<< sizeof(double) << std::endl;
    
    return 0;
}

