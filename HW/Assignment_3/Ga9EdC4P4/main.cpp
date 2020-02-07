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
    
    int width1 = 0;
    int height1 = 0;
    int width2 = 0;
    int height2 = 0;
    
    cout << "Enter the width of rectangle 1:" << endl;
    cin >> width1;
    cout << "Enter the height of rectangle 1:" << endl;
    cin >> height1;
    
    cout << "Enter the width of rectangle 2:" << endl;
    cin >> width2;
    cout << "Enter the height of rectangle 2:" << endl;
    cin >> height2;
    
    if((width1 *  height1) > (width2*height2)){
        cout << "Rectangle 1 has the greater area";
    }else if((width1 *  height1) == (width2*height2)){
        cout << "The rectangles have the same area";
    }else{
        cout << "Rectangle 2 has the greater area";
    }
    
    return 0;
}