//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;


int main(int argc, char** argv) {
    cout << "Enter first number:" << endl<< endl;
    float n1 = 0;
    cin >> n1;
    
    cout << "Enter Second number:" << endl<< endl;
    float n2 = 0;
    cin >> n2;
    
    cout << "Enter third number:" << endl<< endl;
    float n3 = 0;
    cin >> n3;
    
    float max1 = max(n1,n2);
    cout << "Largest number from two parameter function:" << endl;
    cout << max1 << endl << endl;
    
    float max2 = max(max1,n3);
    cout << "Largest number from three parameter function:" << endl;
    cout << max2 << endl;
    return 0;
}