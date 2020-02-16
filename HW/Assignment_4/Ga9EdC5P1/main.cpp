#include <iostream>
using namespace std;
int main(int argc, char** argv) {


    
    int val = 0;
    
    do{
        cout << "Enter a positive integer value:" << endl;
        cin >> val;
    
    }while(val < 1);
    
    int sum = 0;
    for(int i=0;i<=val;i++){
        sum += i;
    }
    
    cout << "The sum of all the integers from 1 to " << val << " is " << sum;
    return 0;
}