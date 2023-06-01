//Elijah Morris
//9-12-19
//Lab 3 
//Hw 3 #18
//Programming Challenge #7 Pg. 255

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int selection;
    float userInp1;
    float userInp2;
    float userInp3;
top:
    cout << "Lab 3 Menu\n";
    cout << "-------------------------------------\n";
    cout << "1. Calculate area of a rectangle\n";
    cout << "2. Calculate area of a triangle\n";
    cout << "3. Calculate surface area of a sphere\n";
    cout << "4. Calculate Interest Earned\n";
    cout << "5. Time Calculator\n";
    cout << "0. Quit\n";
    cout << "-------------------------------------\n";
    cout << "Enter your selection: ";
    cin >> selection;

    if (selection == 1)
    {
        cout << "Calculating the area of a rectangle\n";
        cout << "Enter the height: ";
        cin >> userInp1;
        cout << "Enter the width: ";
        cin >> userInp2;
        float rectArea = userInp1 * userInp2;
        cout << "The area of the rectangle is: "  << rectArea << endl;
        cout << "\n";
        goto top;
    }

    else if (selection == 2)
    {
        cout << "Calculating the are of a triangle\n";
        cout << "What's the height: ";
        cin >> userInp1;
        cout << "What's the base: ";
        cin >> userInp2;
        float triArea = 0.5 * userInp1 * userInp2;
        cout << "The area of the triangle is: " << setprecision(3) << std::fixed << triArea << endl;
        cout << "\n";
        goto top;
    }  

    else if (selection == 3)
    {
        cout << "Calculating the surface area of a sphere\n";
        cout << "What's the radius: ";
        cin >> userInp1;
        float Pi = 3.1415926534;
        float sphereSA = 4 * Pi * std::pow(userInp1, 2);
        cout << "The surface area of the sphere is: " << setprecision(3) << std::fixed << sphereSA << endl;
        cout << "\n";
        goto top;
    }

    else if (selection == 4)
    {
        cout << "Calculating the amount of interest\n";
        cout << "What's the interest rate(decimal number from percent)?: ";
        cin >> userInp1;
        cout << "What's the amount of times it's compounded?: ";
        cin >> userInp2;
        cout << "What's the principal of the account?: ";
        cin >> userInp3;
        float amount = userInp3 * pow((1 + userInp1/userInp2), userInp2);
        float principal = userInp3;
        float interest = amount - principal;
        cout << "Interest Rate: " << userInp1 << setprecision(2) << std::fixed << endl;
        cout << "Times Compounded: " << userInp2 << endl;
        cout << "Principal: $" << userInp3 << endl;
        cout << "Interest: $" << interest << setprecision(2) << std::fixed << endl;
        cout << "Amount in Savings: $" << amount << endl;
        cout << "\n";
        goto top;

    }

    else if (selection == 5)
    {
        cout << "Time Calculator\n";
        cout << "Enter the number of seconds you wish to calculate: ";
        cin >> userInp1;
        if (userInp1 >= 60 && userInp1 < 3600)
        {
            float minuteCalc = userInp1/60;
            cout << userInp1 << " seconds converted into minutes is: " << minuteCalc << " minute(s)" << endl;
            cout << "\n";
            goto top;
        }

        else if (userInp1 >= 3600 && userInp1 < 86400)
        {
            float hourCalc = userInp1/3600;
            cout << userInp1 << " seconds converted into hours is: " << hourCalc << " hour(s)" << endl;
            cout << "\n";
            goto top;
        }

        else if (userInp1 >= 86400)
        {
            float dayCalc = userInp1/86400;
            cout << userInp1 << " seconds converted into days is: " << dayCalc << " day(s)" << endl;
            cout << "\n";
            goto top;
        }

        else 
        {
            cout << "You have entered: " << userInp1 << " seconds, no conversion is necessary\n";
            cout << "\n";
            goto top;
        }

    }

    else if (selection == 0)
    {
        cout << "\n";
        cout << "Quitting the program...\n";
        cout << "\n";
    }

    else 
    {
        cout << "That is not a valid input\n";
        cout << "Quitting the program\n";
    }    

    return 0;
}
