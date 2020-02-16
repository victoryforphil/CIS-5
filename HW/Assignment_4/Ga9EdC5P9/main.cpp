#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    
    int nFloor = 0;
    do{
        cout << "Enter how many floors there are:" << endl;
        cin >> nFloor;
    }while(nFloor < 1);
    
    int totalRoom = 0;
    int totalOccuplied =0;
    
    for(int i=1;i<= nFloor;i++){
        if(i==13){continue;}
        
        int nRooms = 0;
        do{
            cout << "Enter how many rooms are on floor " << i  << ":"<< endl;
            cin >> nRooms;
        }while(nRooms < 1);
        
        int nOccupied = 0;
        do{
            cout << "Enter how many are occupied:"<< endl;
            cin >> nOccupied;
        }while(nOccupied < 1);
        
        totalRoom += nRooms;
        totalOccuplied += nOccupied;
        
    }
    
    cout << "There are " << totalOccuplied << " rooms occupied." << endl;
    cout << "There are " << (totalRoom - totalOccuplied) << " rooms unoccupied." << endl;
    cout << fixed << setprecision(1) << (((float)totalOccuplied / (float)totalRoom) * 100) << "% of rooms are occupied.";
    
    return 0;
}