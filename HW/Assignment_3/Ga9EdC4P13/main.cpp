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
    int pointsDb[] = {0,5,15,30};
    int max = 60;
    
    cout << "Enter how many books you purchased this month:"<<endl;
    int nBook =0;
    cin >> nBook;
    
    int points = max;
    if(nBook < 4){
        points = pointsDb[nBook];
    }
    
    cout << "You earned " << points << " points.";
    return 0;
}