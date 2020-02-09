/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 3rd, 2020, 12:33 PM
 * Purpose:  Municipal Bond Savings for Retirement
 */

//System Libraries
#include <iostream> //I/O Library
#include <iomanip>  //Formatting Library
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const float CNVDCML = 100.0f; //Conversion to Decimal from Percent

//Function Prototypes

//Execution Begins Here
int main(int argc, char **argv)
{
     //Declare Variable Data Types and Constants
     float intRate,         //Interest Rate % from MUNI BOND
         salary,            //Salary in $'s
         yrDpPc;            //Yearly Percent Deposit
     const int nYears = 31; //Number of years to Save

     float balance[nYears];
     int year[nYears], dYear[nYears];

     //Initialize Variables
     balance[0] = 0.0f;  //Savings in $'s
     intRate = 5;        //Yearly Interest Rate
     year[0] = 0;        //Initialize counter to 0
     dYear[0] = 2020;    //Initialize date year to now
     salary = 100000.0f; //$100,000 per year
     yrDpPc = 0.1f;      //Percentage of Salary to deposit

     //Process or map Inputs to Outputs
     //Create the Heading for the Savings Account
     intRate /= CNVDCML;

     float yrDep = yrDpPc * salary;
     float sav2Rtr = salary / intRate;
     float interest = balance[0] * intRate;

     cout << fixed << setprecision(2) << showpoint;
     cout << "With a Yearly Salary of $" << salary
          << " and an investment rate of " << intRate * CNVDCML << "%," << endl;
     cout << "you will need a savings of $" << sav2Rtr
          << " at Retirement." << endl;
     cout << "Is " << yrDpPc * CNVDCML << "% = $" << yrDep << "/year enough for "
          << nYears << " years to reach the goal?" << endl;
     cout << "Year  Year       Balance      Interest       Deposit" << endl;
     cout << setw(4) << year[0] << setw(6) << dYear[0]
          << setw(14) << balance[0] << setw(14)
          << interest << setw(14) << yrDep << endl;

     //Loop for all years
     for (int cnt = 1; cnt < nYears; cnt++)
     {
          year[cnt] = year[cnt - 1] + 1;
          dYear[cnt] = dYear[cnt - 1] + 1;
          balance[cnt] = balance[cnt - 1] * (1 + intRate);
          balance[cnt] += yrDep;
         
     }

     for (int cnt = 1; cnt < nYears; cnt++)
     {
          interest = balance[cnt] * intRate;
          cout << setw(4) << year[cnt] << setw(6) << dYear[cnt]
               << setw(14) << balance[cnt] << setw(14)
               << interest << setw(14) << yrDep << endl;
     }

     //Did you reach the goal
     if (balance[nYears - 1] > sav2Rtr)
          cout << "Yes you reached your retirement goal" << endl;
     else
          cout << "You failed to reach your retirement goal" << endl;

     //Exit stage right!
     return 0;
}