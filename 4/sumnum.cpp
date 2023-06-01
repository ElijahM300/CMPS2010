//Elijah Morris
//9-25-19
//Homework #4 Program 2

#include <iostream>
using namespace std;

int main()
{
    int n;
    int total = 0;
    int i = 0;
    cout << "This program is a summation of a number series 1 to n.\n";
    cout << "\n";
    cout << "Enter n: ";
    cin >> n;
    cout << "\n";
    if(n == 0 || n < 0)
    {
        cout << "Sorry, that is not a valid input, try again\n";
        cout << "\n";
        cout << "Enter n: ";
        cin >> n;
        cout << "\n";

    }

    do
    {
       i++;
       total = total + i;

    } while(i < n);


    cout << "Sum of 1 through " << n << " is: " << total << endl;

    return 0;
}
