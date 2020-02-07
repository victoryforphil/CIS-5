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
    
    int month = 0;
    int day = 0;
    int year = 0;
    
    cout << "Enter a month:\n";
    cin >> month;
    cout << "Enter a day:\n";
    cin >> day;
    cout << "Enter a year:\n";
    cin >> year;
    
    if(month * day == year){
        cout << "The date is magic";
    }else{
        cout << "The date is not magic";
    }
    return 0;
}