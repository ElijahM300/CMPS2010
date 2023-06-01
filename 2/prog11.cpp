//Elijah Morris
//9-11-19
//Hw Program 11

#include <iostream>
using namespace std;

int main()
{
    float mpgTown = 23.5; 
    float mpgHighway = 28.9;
    int tank = 20;
    float mpgTownTotal = mpgTown * tank;
    float mpgHighwayTotal = mpgHighway * tank;
    
    cout << "This program calculates and displays how many miles a car can drive\n";  
    cout << "on one tank of gas based on whether it's traveling in town or on the highway.\n";
    cout << "\n";
    cout << "The car averages 23.5 mpg in town and 28.9 mpg on the highway.\n";
    cout << "\n";
    cout << "The car can travel " << mpgTownTotal << " miles on one 20-gallon tank of gas in town.\n";
    cout << "The car can travel " << mpgHighwayTotal << " miles on one 20-gallon tank of gas on the highway.\n";
    cout << "\n";
    cout << "End of program" << endl;

    return 0;


}
