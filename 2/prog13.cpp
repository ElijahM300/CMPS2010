//Elijah Morris
//9-11-19
//Hw Program 13

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float cost = 14.95;
    float profit = 14.95 * 0.35;
    float sellingPrice = cost + profit;

    cout << "This program calculates and displays the price an electronic company would\n";
    cout << "sell a circuit board if they made a 35 percent profit off of it.\n";
    cout << "\n";  
    cout << "The cost to make the circuit board is $" << cost << endl;
    cout << "The amount of profit the company wants to make off of the circuit board is $" << setprecision(3) << profit << endl;
    cout << "The company would want to sell the circuit board at $" << setprecision(4) << sellingPrice << endl;
    cout << "\n";
    cout << "End of program" << endl;

    return 0; 

}
