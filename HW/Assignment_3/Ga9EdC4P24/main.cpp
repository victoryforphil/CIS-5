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
    cout << "Enter the starting time:"<<endl;
    double startTime = 0.0;
    cin >> startTime;
    
    if(startTime > 23.59){
        cout << "Error";
    }
    
    if((startTime-static_cast<int>(startTime)) > 59){
        cout << "Error";
    }
    
    int mins = 0;
    cout << "Enter the number of minutes of the call:"<<endl;
    cin >> mins;
    
    double cost = 0;
    
    if(startTime > 19.01){
        cost = mins * 0.2;
    }else if(startTime > 7.00){
        cost = mins * 0.45;
    }else{
        cost = mins* 0.05;
    }
    
    cout << "The charges are $" << cost;
    return 0;
}