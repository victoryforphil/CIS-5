/* 
 * File:
 * Author:
 * Date:
 * Purpose:
 * Version:
 */

//System Libraries - Post Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    
    
    const size_t mouDed = 1/7;
    const float  conver = 45359.2; // per 100 lb
    const float sweetIn = 0.001f;
    const float sweetGm = 350 * sweetIn;
    
    cout << "Program to calculate the limit of Soda Pop Consumption.\nInput the desired dieters weight in lbs.\n";
    
    size_t weight = 0;
    cin >> weight;
    
    cout << "The maximum number of soda pop cans\nwhich can be consumed is "<<fixed<<setprecision(0)<< ((((weight / 100) * conver) / 7) / sweetGm) - 1<<" cans";
    return 0;
}