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
    cout << "Enter a number between 1 and 10:" << endl;
    int num = 0;
    cin >> num;
    while(num < 1 || num > 10){

        cout << "Entered number is not valid, reenter number:" << endl;
        cin >> num;

    }
    cout << num << " is ";
    switch(num){
        case 1:
        cout << "I";
        break;
        case 2:
        cout << "II";
        break;
        case 3:
        cout << "III";
        break;
        case 4:
        cout << "IV";
        break;
        case 5:
        cout << "V";
        break;
        case 6:
        cout << "VI";
        break;
        case 7:
        cout << "VII";
        break;
        case 8:
        cout << "VIII";
        break;
        case 9:
        cout << "IX";
        break;
        case 10:
        cout << "X";
        break;
        
    }
    cout << " in Roman numerals";
    return 0;
}
}

