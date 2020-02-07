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
    cout << "Choose which medium the sound wave will travel in.\n1.Air\n2.Water\n3.Steel"<<endl;
    
    
    int med;
    double speed = -1;
    cin >> med;
    
    switch(med){
        case 1:
        speed = 1100;
        break;
        
        case 2:
        speed = 4900;
        break;
        
        case 3:
        speed = 16400;
        break;
    }
    
    if(speed == -1){
        cout << "Error";
    }
    
    cout << "Enter the distance the wave will travel:"<<endl;
    double dist = -1;
    cin >> dist;
    
    if(dist < 0){
        cout << "Error";
    }
    
    cout << "The wave will take "<<fixed << setprecision(4) << dist / speed << " seconds";
    
    return 0;
}