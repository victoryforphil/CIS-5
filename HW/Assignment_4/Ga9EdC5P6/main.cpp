#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv) {
    cout << "What is the speed of the vehicle in mph?" << endl;
    int speed = 0 ;
    cin >> speed;
    
    cout << "How many hours has it traveled?" << endl;
    int hours = 0;
    cin >> hours;
    
    cout << "Hour   Distance Traveled" << endl;
    for(int i=1;i<=hours;i++){
        cout << i << setw(15) << speed * i << endl;
    }
    return 0;
}