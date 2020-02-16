/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  
 */

//System Libraries
#include <iomanip>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    int empId[] = {5658845,4520125,7895122,8777541,8451277,1302850,7580489};
    int hours[7];
    float payRate[7];
    float wages[7];
    
    for(char i=0;i<7;i++){
        cout << "Enter employee " << empId[i] << "'s pay rate:"<<endl;
        cin >> payRate[i];
        cout << "Enter employee " << empId[i] << "'s hours work:"<<endl;
        cin >> hours[i];
        
        wages[i] = hours[i] * payRate[i];

    }
    
    for(char i=0;i<7;i++){
        cout << "Employee " << empId[i] << "'s gross pay $" << fixed << setprecision(2) << wages[i]<<endl;

    }
    return 0;
}