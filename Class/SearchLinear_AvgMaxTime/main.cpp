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
    const int SIZE=1000;
    int array[SIZE];
    int avgTime;   //Average time to find the element in the array
    int nAttmpts;  //Number of Attempts to find an element in the array
    int maxTime;   //Max time or number of guesses to find
    
    //Initialize Variables
    fillAry(array,SIZE);
    maxTime=avgTime=0;
    nAttmpts=500000;
    
    //Process or map Inputs to Outputs
    for(int attmpt=1;attmpt<=nAttmpts;attmpt++){
        int find=rand()%SIZE;
        int howLong;
        bool found=linSrch(array,SIZE,find,howLong);
        avgTime+=howLong;
        if(maxTime<howLong)maxTime=howLong;
    }
    
    //Display Outputs
    cout<<"The work, i.e. time to find using Linear Search?"<<endl;
    cout<<"The #of values in the array = "<<SIZE<<endl;
    cout<<"The Simulated   avg time    = "
            <<static_cast<float>(avgTime)/nAttmpts<<endl;
    cout<<"The Theoretical avg time    = "<<SIZE/2<<endl;
    cout<<"The Simulated   max time    = "<<maxTime<<endl;
    cout<<"The Theoretical max time    = "<<SIZE<<endl;

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