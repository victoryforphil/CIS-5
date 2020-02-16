#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv) {
    cout << "Enter how many calories are burned per minute:" << endl;
    double cal = 0;
    cin >> cal;
    cout << "Min\tCalories burned" << endl;
    
    for(int i=5;i<=30;i+= 5){
        cout << i << "\t" << fixed << setprecision(1) <<cal * i << endl;
    }
    return 0;
}