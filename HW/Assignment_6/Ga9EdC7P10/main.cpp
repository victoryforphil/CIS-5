/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  
 */

//System Libraries
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
    char answers[] = {'A', 'D', 'B', 'B','C','B','A','B','C','D','A','C','D','B','D','C','C','A','D','B'};
    
    char resps[20];
    vector<short> wrongQs;
    int wrong, corrct = 0;
    cout << "Enter the student's test answers:"<<endl;
    for(short i=0;i<20;i++){
        cin >> resps[i];
        
        if(resps[i] != answers[i]){
            wrong += 1;
            wrongQs.push_back(i);
        }else{
            corrct++;
        }
    }
    
    if(corrct >= 15){
        cout << "The student passed." << endl;
    }else{
        cout << "The student failed." << endl;
    }
    
    cout << "There were " << corrct << " correct answers." << endl;
    cout << "There were " << wrongQs.size()  << " incorrect answers.\nIncorrect questions:" << endl;
     for(short i=0;i<wrongQs.size();i++){
        cout << wrongQs[i] + 1 << endl;
    }
    
    return 0;
}