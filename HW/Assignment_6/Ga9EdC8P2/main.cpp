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
    int nums[] = { 13579 ,26791,26792, 33445 ,55555,62483 ,77777 ,79422 ,85647,93121};
    cout << "Enter the winning number:"<<endl;
    int win = 0;
    cin >> win;
    bool found = false;
    for(char i=0;i<sizeof(nums)/sizeof(int);i++){
        if(nums[i] == win){
            found = true;
        }
    }
    
    if(found){
        cout << "Congratulations you have won!";
    }else{
        cout << "No winning numbers.";
    }
    
    return 0;
}