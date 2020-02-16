/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
void getScore(int &score){
    cout << "Enter a test score:" << endl;
    cin >> score;
}

int findLowest(int scores[]){
    int lowValue = 9999;
    for(int i=0;i<5;i++){
        if(scores[i] <= lowValue){
            lowValue = scores[i];
        }
    }
    return lowValue;
}

void calcAverage(int scores[]){
    float sum = 0;
    for(int i=0;i<5;i++){

        sum += scores[i];

    }
 
    sum -= findLowest(scores); // Complete the "4 highest" requirement by removing the smallest element
    
    cout <<"The average is " << fixed << setprecision(1) << sum / 4;
}
int main(int argc, char** argv) {
    int nScores = 5;
    int scores[nScores];
    for(int i=0;i<nScores;i++){
        getScore(scores[i]);
    }
    
    calcAverage(scores);

    return 0;
}