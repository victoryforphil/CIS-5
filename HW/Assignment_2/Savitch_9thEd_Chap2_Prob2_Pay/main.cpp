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
    
    cout << "Input previous annual salary." << endl;
    float yearSal = 0;
    cin >> yearSal;
    
    float monthSal = yearSal / 12;
    float newMonth = monthSal + (monthSal * 0.076);
    float retro = (monthSal * 0.076) * 6;
    float newAnn = newMonth * 12;
    
    cout << "Retroactive pay    = $" << fixed << setw(7) << setprecision(2) << retro << endl;
    cout << "New annual salary  = $" << fixed << setw(7) << setprecision(2) << newAnn << endl;
    cout << "New monthly salary = $" << fixed << setw(7) << setprecision(2) << newMonth;

    
    return 0;
}