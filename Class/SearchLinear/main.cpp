/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 5th, 2020, 11:00 AM
 * Purpose:  Linear Search
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random number Library
#include <ctime>     //Time to set random number seed
#include <vector>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
void fillAry(int [],int);     //Fill an array with the index
bool linSrch(int [],int,int,int&);//Find the element in the array

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variable Data Types and Constants
    const int SIZE=500000;
    int array[SIZE];
    
    //Initialize Variables
    fillAry(array,SIZE);
    
    //Process or map Inputs to Outputs
    int find=rand()%(2*SIZE);
    int howLong;
    bool found=linSrch(array,SIZE,find,howLong);
    
    //Display Outputs
    if(found){
        cout<<find<<" was found in "<<howLong<<" attempts."<<endl;
    }else{
        cout<<find<<" was not found in the array."<<endl;
        cout<<"With the number of attempts = "<<howLong<<endl;
    }

    //Exit stage right!
    return 0;
}

bool linSrch(int a[],int n,int val,int &amtWrk){
    for(int i=0;i<n;i++){
        if(a[i]==val){
            amtWrk=i+1;
            return true;
        }
    }
    amtWrk=n;
    return false;
}

void fillAry(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=i;
    }
}