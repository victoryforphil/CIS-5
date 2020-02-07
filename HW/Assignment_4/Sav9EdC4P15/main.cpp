#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    //Set the random number seed
    float coinValues[] = {0.05, 0.1, 0.25,1.0};
    float total = 0.0;
    do{
        cout << "List of coins:\n1. Nickel\n2. Dime\n3. Quarter\n4. Dollar\nEnter number for coin:\n" << endl;
        int selection=0;
        cin >> selection;
        total += coinValues[selection - 1];
        cout << "Current amount: $" << fixed << setprecision(2) << total << endl;
    }while (total < 3.30);
    //Enjoy·your·deep-fried·twinkie↵
    //Change·to·be·returned:·$0.50↵
    cout << "Enjoy your deep-fried twinkie" << endl;
    cout << "Change to be returned: $" << fixed << setprecision(2) << total - 3.50 << endl;
    return 0;
}