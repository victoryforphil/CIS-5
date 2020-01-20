/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    cout << "Temperature Converter\nInput Degrees Fahrenheit" << endl;
    double inTemp;
    cin >> inTemp;
    cout << fixed << setw(3) << setprecision(1);
    cout << inTemp << " Degrees Fahrenheit = " << (0.5555) * (inTemp - 32) << " Degrees Centigrade";
    return 0;
}