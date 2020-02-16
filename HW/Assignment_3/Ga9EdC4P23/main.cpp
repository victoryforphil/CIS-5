/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose: 
 */

//System Libraries
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    
    bool bRun = true;
    while(bRun){
        cout << "Geometry Calculator\n1. Calculate the Area of a Circle\n2. Calculate the Area of a Rectangle\n3. Calculate the Area of a Triangle\n4. Quit"<<endl;
    
        int choice = 0;
        double radius = 0;
        double length = 0;
        double height = 0;
        double base = 0;
        double heightTri = 0;
        cin >> choice;
        
        
        while(choice < 1 || choice > 4){
            cout << "Invalid entry, Reenter:"<<endl;
            cin >> choice;
        }
        
    
        switch(choice){
            case 1:
                cout << "Enter the radius of the circle:\n";
            
                cin >> radius;
                while(radius < 0.0001){
                    cout << "Invalid entry, Reenter:"<<endl;
                    cin >> radius;
                }
                cout << "The area of the circle is " << (3.14159 * (radius * radius));
            break;
        
         case 2:
                cout << "Enter the length of the rectangle:\n";
            
                cin >> length;
                while(length < 0.001){
                    cout << "Invalid entry, Reenter:"<<endl;
                    cin >> length;
                }
            
               cout << "Enter the height of the rectangle:\n";
            
               cin >> height;
               while(height < 0.001){
                   cout << "Invalid entry, Reenter:"<<endl;
                   cin >> height;
               }
               cout << "The area of the rectangle is " << (height * length);
          break;
        
          case 3:
          cout << "Enter the base of the triangle::\n";
            
                cin >> base;
                while(base < 0.001){
                    cout << "Invalid entry, Reenter:"<<endl;
                    cin >> base;
                }
            
               cout << "Enter the height of the triangle::\n";
            
               cin >> heightTri;
               while(heightTri < 0.001){
                   cout << "Invalid entry, Reenter:"<<endl;
                   cin >> heightTri;
               }
               cout << "The area of the triangle is " << (heightTri * base * 0.5);
          break;
        
          case 4:
          bRun = false;
          return 0;
          break;
        }
        bRun = false;
    }
    
    return 0;
}