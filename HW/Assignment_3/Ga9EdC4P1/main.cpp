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
    
    int var1 =0;
    int var2 =0;
    cout << "Enter a number:" <<endl;
    cin >> var1;
    cout << "Enter a number:" <<endl;
    cin >> var2;
    
    if(var1 > var2){
        cout << var1 << " is larger";
    }else{
        cout << var2 << " is larger";
    }
    return 0;
}