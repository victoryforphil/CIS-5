/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 5th, 2020, 11:00 AM
 * Purpose:  Binary Search
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random number Library
#include <ctime>     //Time to set random number seed
#include <cmath>     //Math Library for log function
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
void fillAry(int [],int);     //Fill an array with the index
bool binSrch(int [],int,int,int&);//Find the element in the array

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variable Data Types and Constants
    const int SIZE=500000;
    int array[SIZE];
    int avgTime;   //Average time to find the element in the array
    int nAttmpts;  //Number of Attempts to find an element in the array
    int maxTime;   //The maximum time or number of Guesses
    
    //Initialize Variables
    fillAry(array,SIZE);
    maxTime=avgTime=0;
    nAttmpts=500000;
    
    //Process or map Inputs to Outputs
    for(int attmpt=1;attmpt<=nAttmpts;attmpt++){
        int find=rand()%SIZE;
        int howLong;
        bool found=binSrch(array,SIZE,find,howLong);
        avgTime+=howLong;
        if(maxTime<howLong)maxTime=howLong;
    }
    float expOf2=log(SIZE)/log(2);
    
    //Display Outputs
    cout<<"The work, i.e. time to find using Binary Search?"<<endl;
    cout<<"The number of values in the array      = "<<SIZE<<endl;
    cout<<"The Simulate    average time           = "
            <<static_cast<float>(avgTime)/nAttmpts<<endl;
    cout<<"The Theoretical average time          >= "
            <<expOf2-1<<endl;
    cout<<"The Theoretical maximum time is  ceiling("
            <<expOf2<<") i.e. next integer"<<endl;
    cout<<"i.e.#Guesses are integers so round up  = "
            <<static_cast<int>(expOf2+1)<<endl;
    cout<<"The Simulated   maximum time           = "
            <<maxTime<<endl;
    
    //Exit stage right!
    return 0;
}

bool binSrch(int a[],int n,int val,int &amtWrk){
    //Declare variables
    int low=0;
    int high=n-1;
    bool found=false;
    amtWrk=0;
    do{
        int middle=(high+low)/2;
        if(a[middle]==val){
            found=true;
        }else if(a[middle]<val){
            low=middle+1;
        }else{
            high=middle-1;
        }
        amtWrk++;
    }while(low<=high&&!found);
    return found;
}

void fillAry(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=i;
    }
}