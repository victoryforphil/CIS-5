/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose: 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    int temp = 0;
    cout << "Enter a temperature:"<<endl;
    cin >> temp;
    if(temp < -174) {cout << "Ethyl alcohol will freeze" << endl;}
    if(temp < -38) {cout << "Mercury will freeze" << endl;}
    if(temp < -362) {cout << "Oxygen will freeze" << endl;}
    if(temp < 32) {cout << "Water will freeze" << endl;}
    
    if(temp > 172) {cout << "Ethyl alcohol will boil" << endl;}
    if(temp > 676) {cout << "Mercury will boil" << endl;}
    if(temp > -306) {cout << "Oxygen will boil" << endl;}
    if(temp > 212) {cout << "Water will boil" << endl;}

    return 0;
}