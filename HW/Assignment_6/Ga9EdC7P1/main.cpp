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
    //Set Random Number seed
    short nums[10];
    cout << "Enter 10 integers:" << endl;
    
    short highest=0;
    short lowest=255;
    for(short i=0;i<10;i++){
        cin >> nums[i];
        if(nums[i] < lowest){
            lowest = nums[i];
        }
        if(nums[i] > highest){
            highest = nums[i];
        }
    }
    cout << highest << " is the highest number." << endl;
    cout << lowest << " is the lowest number.";
    return 0;
}