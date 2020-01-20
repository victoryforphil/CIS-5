/* 
 * File:
 * Author:
 * Date:
 * Purpose:
 * Version:
 */

//System Libraries - Post Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    
    
    cout << "Input the maximum room capacity and the number of people\n";
    size_t max;
    size_t people;
    
    cin >> max;
    cin >> people;
    
    if(people > max){
        cout << "Meeting cannot be held." <<endl;
        cout << "Reduce number of people by "<<people - max<< " to avoid fire violation.";
    }else{
        cout << "Meeting can be held." <<endl;
        cout << "Increase number of people by "<<max - people<< " will be allowed without violation.";
    }
    
    return 0;
}