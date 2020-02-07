/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  
 */

//System Libraries
#include <iostream>
using namespace std;

bool isPrime(int number){
    bool prime=true;
    for(int i = 2; i <= number / 2; i++) {
       if(number % i == 0) {
          prime = false;
          break;
       }
    }
    return prime;
}

int main(int argc, char** argv) {
    cout << "Enter a number:" << endl;
    int number = 0;
    cin >> number;
    
    if(isPrime(number)){
        cout << number << " is a prime number.";
    }else{
        cout << number << " is not a prime number";
    }
    return 0;
}