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
int search(int array[], int left, int right, int toFind){
    if(right >= 1){
        int mid = left + (right - left) / 2;
        if(array[mid] == toFind){
            return mid;
        }
        
        if(array[mid] > toFind){
            return search(array, left, mid-1, toFind);
        }
        
        return search(array, mid+1, right, toFind);
    }
    
    return -1;
}

int main(int argc, char** argv) {
    int nums[] = { 13579 ,26791,26792, 33445 ,55555,62483 ,77777 ,79422 ,85647,93121};
    cout << "Enter the winning number:"<<endl;
    int win = 0;
    cin >> win;

    
    if(search(nums,0, sizeof(nums)/sizeof(int)-1,win) != -1){
        cout << "Congratulations you have won!";
    }else{
        cout << "No winning numbers.";
    }
    
    return 0;
}