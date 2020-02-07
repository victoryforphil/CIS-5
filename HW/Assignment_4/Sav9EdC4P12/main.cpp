#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    bool run = true;
    while(run){
        cout << "Enter height(inches):"<<endl<<endl;
        double inches = 0;
        cin >> inches;
        
        cout << "Enter Weight(pounds):"<<endl<<endl;
        double weight = 0;
        cin >> weight;
        
        cout << "Enter age:"<<endl<<endl;
        double age = 0;
        cin >> age;
        
        cout << "Hat size = " << fixed << setprecision(1) << (weight/inches) * 2.9 << endl;
        
        
        
        double jacketAdj = 0;
        
        if(age > 30){
            int yearsOver = age - 30;
            yearsOver /= 10;
            jacketAdj = 0.125 * yearsOver;
            
        }
        cout << "Jacket size = " << fixed << setprecision(1) << ((inches * weight) / 288) + jacketAdj<< endl;
        
        age += 10;
        if(age > 30){
            int yearsOver = age - 30;
            yearsOver /= 10;
            jacketAdj = 0.125 * yearsOver;
            
        }
        cout << "Jacket size in 10 years = " << fixed << setprecision(1) << ((inches * weight) / 288) + jacketAdj<< endl;
        
        
        age -= 10;
        double waistAdj = 0;
        if(age > 28){
           int yearsOver = age - 28;
           yearsOver /= 2;
           waistAdj = 0.1 * yearsOver;
        }
        cout << "Waist size = " << fixed << setprecision(1) << (weight / 5.7) + waistAdj << endl;
        
        age += 10;
        
        if(age > 28){
           int yearsOver = age - 28;
           yearsOver /= 2;
           waistAdj = 0.1 * yearsOver;
        }
        cout << "Waist size in 10 years = " << fixed << setprecision(1) << (weight / 5.7) + waistAdj << endl;
        
        
        
        
        
        
        cout << "\nRun again:" << endl;
        char runAgain = ' ';
        cin >> runAgain;
        
        if(runAgain == 'n'){
                    run = false;
        }else{
            cout << endl;
        }
        

        
    }
    return 0;
}