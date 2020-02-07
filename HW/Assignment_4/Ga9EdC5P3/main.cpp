#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv) {
    cout << "Enter how many millimeters the ocean is rising per year:" << endl;
    double mmRise = 0;
    cin >> mmRise;
    cout << "Year\tRise(mm)" << endl;
    
    for(int i=1;i<=30;i++){
        cout << i << "\t" << fixed << setprecision(1) <<mmRise * i << endl;
    }
    return 0;
}