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
int main(int argc, char** argv) {
    cout << "Enter the mass of an object:"<<endl;
    
    double mass = 0;
    cin >> mass;
    
    double weight = mass * 9.8;
    
    if(weight > 1000){
        cout << "The object is too heavy";
    }else if(weight < 10){
        cout << "The object is too light";
    }else{
        cout << "The object weighs " << fixed << setprecision(1) << weight << " newtons";
    }
    return 0;
}