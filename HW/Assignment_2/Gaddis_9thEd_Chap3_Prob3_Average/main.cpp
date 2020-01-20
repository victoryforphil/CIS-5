/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    int numScores = 5.0;
    int sum = 0;
    
    cout << "Input 5 numbers to average " << endl;
    for(int i=0;i<numScores;i++){
        int _entry;
        cin >>_entry;
        sum += _entry;
    }
    cout << "The average = "  << fixed << setprecision(1) << (double) (sum / numScores);
    
    
    return 0;
}