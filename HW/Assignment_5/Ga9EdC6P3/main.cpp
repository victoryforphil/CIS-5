/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries


float getSales(char* division);
void  findHighest(float totals[]);

int main(int argc, char** argv) {
    //Set Random Number seed
    float sales[4];
    sales[0] = getSales("Northeast");
    sales[1] = getSales("Southeast");
    sales[2] = getSales("Northwest");
    sales[3] = getSales("Southwest");
    findHighest(sales);
    return 0;
}


float getSales(char* division){
    cout << "Enter the sales for " << division << " division:$"<<endl;
    float sales = 0;
    cin >> sales;
    return sales;    
}

void findHighest(float totals[]){
    char* divNames[] = {"Northeast", "Southeast", "Northwest", "Southwest"};
    int highestIndex = 0;
    for(int i=0;i<sizeof(totals);i++){

        if(totals[i] > totals[highestIndex]){
            highestIndex = i;
        }
    }
    

    cout << "The " << divNames[highestIndex] << " division had the highest sales of $" << fixed <<setprecision(2) << totals[highestIndex];
    
}
///