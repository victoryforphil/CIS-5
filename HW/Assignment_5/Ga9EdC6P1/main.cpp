/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here

double calculateRetail(double cost, double markup);

int main(int argc, char** argv) {
    
    cout << "Enter the wholesale cost:" << endl;
    double cost = 0;
    cin >> cost;
    cout << "Enter the markup percentage:" << endl;
    double markup = 0;
    cin >> markup;
    markup /= 100;
    double final = calculateRetail(cost, markup);
    cout << "The retail price is $" << fixed << setprecision(2) << final;
    return 0;
}

double calculateRetail(double cost, double markup){
    return cost + (cost * markup);
    
}