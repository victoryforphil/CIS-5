/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    
    int cookiePerServing = 4;
    int calCookie = 300 / 4;
    
    cout <<"Calorie Counter\nHow many cookies did you eat?"<<endl;
    int numCookie = 0;
    cin >> numCookie;
    int cal = numCookie * calCookie;
    cout << "You consumed " << cal << " calories.";
    
    return 0;
}