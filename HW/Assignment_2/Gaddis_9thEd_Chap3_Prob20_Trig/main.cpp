/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Victo
 *
 * Created on January 17, 2020, 12:10 AM
 */

#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    return 0;
}

#include <iostream>  //Input/Output Library
#include <iomanip>
#include <math.h>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
const double PI = atan(1) * 4;
double d2r(double num) {
    double radians= (num * PI)/180;
    return radians;
}




int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int angle;
    cout << "Calculate trig functions\nInput the angle in degrees.\n";
    cin >> angle;
    cout << fixed << setprecision(4);
    cout << "sin(" << angle << ") = " << sin(d2r(angle)) << endl;
    cout << "cos(" << angle << ") = " << cos(d2r(angle)) << endl;
    cout << "tan(" << angle << ") = " << tan(d2r(angle));
    
     
    return 0;
}

