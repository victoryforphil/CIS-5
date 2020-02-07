/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 21, 2020, 11:25 AM
 * Purpose:  Menu
 */

//System Libraries
#include <iomanip>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char **argv)
{
    //Declare Variable Data Types and Constants
    unsigned char nProbs; //Number of problems in menu < 10
    unsigned char choose; //User's choice

    //Initialize values
    nProbs = '10';

    //Loop on menu and problems
    do
    {
        //Display the menu
        cout << "Choose the Problem Solution to Display" << endl;
        cout << "1. Problem solution for 1" << endl;
        cout << "2. Problem solution for 2" << endl;
        cout << "3. Problem solution for 3" << endl;
        cout << "4. Problem solution for 4" << endl;
        cout << "5. Problem solution for 6" << endl;
        cout << "6. Problem solution for 13" << endl;
        cout << "7. Problem solution for 20" << endl;
        cout << "8. Problem solution for 22" << endl;
        cout << "9. Problem solution for 23" << endl;
        cout << "10. Problem solution for 24" << endl
             << endl;
        cin >> choose;

        //Dependent upon the choice
        switch (choose)
        {
        case '1':
        {
            int var1 = 0;
            int var2 = 0;
            cout << "Enter a number:" << endl;
            cin >> var1;
            cout << "Enter a number:" << endl;
            cin >> var2;

            if (var1 > var2)
            {
                cout << var1 << " is larger";
            }
            else
            {
                cout << var2 << " is larger";
            }
            break;
        }
        case '2':
        {
            cout << "Enter a number between 1 and 10:" << endl;
            int num = 0;
            cin >> num;
            while (num < 1 || num > 10)
            {

                cout << "Entered number is not valid, reenter number:" << endl;
                cin >> num;
            }
            cout << num << " is ";
            switch (num)
            {
            case 1:
                cout << "I";
                break;
            case 2:
                cout << "II";
                break;
            case 3:
                cout << "III";
                break;
            case 4:
                cout << "IV";
                break;
            case 5:
                cout << "V";
                break;
            case 6:
                cout << "VI";
                break;
            case 7:
                cout << "VII";
                break;
            case 8:
                cout << "VIII";
                break;
            case 9:
                cout << "IX";
                break;
            case 10:
                cout << "X";
                break;
            }
            cout << " in Roman numerals";
            break;
        }
        case '3':
        {
            int month = 0;
            int day = 0;
            int year = 0;

            cout << "Enter a month:\n";
            cin >> month;
            cout << "Enter a day:\n";
            cin >> day;
            cout << "Enter a year:\n";
            cin >> year;

            if (month * day == year)
            {
                cout << "The date is magic";
            }
            else
            {
                cout << "The date is not magic";
            }
            break;
        }

        case '4':
        {
            int width1 = 0;
            int height1 = 0;
            int width2 = 0;
            int height2 = 0;

            cout << "Enter the width of rectangle 1:" << endl;
            cin >> width1;
            cout << "Enter the height of rectangle 1:" << endl;
            cin >> height1;

            cout << "Enter the width of rectangle 2:" << endl;
            cin >> width2;
            cout << "Enter the height of rectangle 2:" << endl;
            cin >> height2;

            if ((width1 * height1) > (width2 * height2))
            {
                cout << "Rectangle 1 has the greater area";
            }
            else if ((width1 * height1) == (width2 * height2))
            {
                cout << "The rectangles have the same area";
            }
            else
            {
                cout << "Rectangle 2 has the greater area";
            }
            break;
        }
        case '5':
        {
            cout << "Enter the mass of an object:" << endl;

            double mass = 0;
            cin >> mass;

            double weight = mass * 9.8;

            if (weight > 1000)
            {
                cout << "The object is too heavy";
            }
            else if (weight < 10)
            {
                cout << "The object is too light";
            }
            else
            {
                cout << "The object weighs " << fixed << setprecision(1) << weight << " newtons";
            }
            break;
        }
        case '6':
        {
            int pointsDb[] = {0, 5, 15, 30};
            int max = 60;

            cout << "Enter how many books you purchased this month:" << endl;
            int nBook = 0;
            cin >> nBook;

            int points = max;
            if (nBook < 4)
            {
                points = pointsDb[nBook];
            }

            cout << "You earned " << points << " points.";
            break;
        }
        case '7':
        {
            cout << "Choose which medium the sound wave will travel in.\n1.Air\n2.Water\n3.Steel" << endl;

            int med;
            double speed = -1;
            cin >> med;

            switch (med)
            {
            case 1:
                speed = 1100;
                break;

            case 2:
                speed = 4900;
                break;

            case 3:
                speed = 16400;
                break;
            }

            if (speed == -1)
            {
                cout << "Error";
            }

            cout << "Enter the distance the wave will travel:" << endl;
            double dist = -1;
            cin >> dist;

            if (dist < 0)
            {
                cout << "Error";
            }

            cout << "The wave will take " << fixed << setprecision(4) << dist / speed << " seconds";

            break;
        }
        case '8':
        {
            int temp = 0;
            cout << "Enter a temperature:" << endl;
            cin >> temp;
            if (temp < -174)
            {
                cout << "Ethyl alcohol will freeze" << endl;
            }
            if (temp < -38)
            {
                cout << "Mercury will freeze" << endl;
            }
            if (temp < -362)
            {
                cout << "Oxygen will freeze" << endl;
            }
            if (temp < 32)
            {
                cout << "Water will freeze" << endl;
            }

            if (temp > 172)
            {
                cout << "Ethyl alcohol will boil" << endl;
            }
            if (temp > 676)
            {
                cout << "Mercury will boil" << endl;
            }
            if (temp > -306)
            {
                cout << "Oxygen will boil" << endl;
            }
            if (temp > 212)
            {
                cout << "Water will boil" << endl;
            }
            break;
        }
        case '9':
        {
            bool bRun = true;
            while (bRun)
            {
                cout << "Geometry Calculator\n1. Calculate the Area of a Circle\n2. Calculate the Area of a Rectangle\n3. Calculate the Area of a Triangle\n4. Quit" << endl;

                int choice = 0;
                double radius = 0;
                double length = 0;
                double height = 0;
                double base = 0;
                double heightTri = 0;
                cin >> choice;

                while (choice < 1 || choice > 4)
                {
                    cout << "Invalid entry, Reenter:" << endl;
                    cin >> choice;
                }

                switch (choice)
                {
                case 1:
                    cout << "Enter the radius of the circle:\n";

                    cin >> radius;
                    while (radius < 0.0001)
                    {
                        cout << "Invalid entry, Reenter:" << endl;
                        cin >> radius;
                    }
                    cout << "The area of the circle is " << (3.14159 * (radius * radius));
                    break;

                case 2:
                    cout << "Enter the length of the rectangle:\n";

                    cin >> length;
                    while (length < 0.001)
                    {
                        cout << "Invalid entry, Reenter:" << endl;
                        cin >> length;
                    }

                    cout << "Enter the height of the rectangle:\n";

                    cin >> height;
                    while (height < 0.001)
                    {
                        cout << "Invalid entry, Reenter:" << endl;
                        cin >> height;
                    }
                    cout << "The area of the rectangle is " << (height * length);
                    break;

                case 3:
                    cout << "Enter the base of the triangle::\n";

                    cin >> base;
                    while (base < 0.001)
                    {
                        cout << "Invalid entry, Reenter:" << endl;
                        cin >> base;
                    }

                    cout << "Enter the height of the triangle::\n";

                    cin >> heightTri;
                    while (heightTri < 0.001)
                    {
                        cout << "Invalid entry, Reenter:" << endl;
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
            break;
        }
        case '10':
        {
            cout << "Enter the starting time:" << endl;
            double startTime = 0.0;
            cin >> startTime;

            if (startTime > 23.59)
            {
                cout << "Error";
            }

            if ((startTime - static_cast<int>(startTime)) > 59)
            {
                cout << "Error";
            }

            int mins = 0;
            cout << "Enter the number of minutes of the call:" << endl;
            cin >> mins;

            double cost = 0;

            if (startTime > 19.01)
            {
                cost = mins * 0.2;
            }
            else if (startTime > 7.00)
            {
                cost = mins * 0.45;
            }
            else
            {
                cost = mins * 0.05;
            }

            cout << "The charges are $" << cost;
            break;
        }
        default:
            cout << "Exiting Menu" << endl;
        }
    } while (choose <= nProbs);

    //Exit stage right!
    return 0;
}