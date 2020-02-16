/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    float sales[5];
    string names[] = {"mild", "medium", "sweet", "hot", "zesty"};
    float total = 0;
    short lowIndex = 0;
    short highIndex = 0;
    for(short i=0;i<5;i++){
        cout << "Enter the sales of " << names[i] << " salsa:$"<<endl;
        cin >> sales[i];
        total += sales[i];
        
        if(sales[lowIndex] > sales[i]){
            lowIndex = i;
        }
        
        if(sales[highIndex] < sales[i]){
            highIndex = i;
        }
    }
    cout << "Type     Sales" << endl;
    
    for(short i=0;i<5;i++){
        cout <<left << setw(9)<< setfill(' ') << names[i] <<  fixed << setprecision(2) << "$"<<sales[i] << endl;
    }
    
    cout << "Total Sales was $"<<fixed << setprecision(2)<<total<<endl;
    cout << names[lowIndex] << " was the lowest selling product."<<endl;
    cout << names[highIndex] << " was the highest selling product.";
    
    return 0;
}