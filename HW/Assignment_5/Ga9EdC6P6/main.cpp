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

double kineticEnergy(double mass, double vel){
    return 0.5 * mass * (vel*vel);
}

int main(int argc, char** argv) {
    double mass;
    double vel;
    
    cout << "Enter the object's mass:"<<endl;
    cin >> mass;
    cout << "Enter the object's velocity:"<<endl;
    cin >> vel;
    cout << "The object has " << fixed << setprecision(1) << kineticEnergy(mass, vel) << " Joules of energy.";
    return 0;
}