//Elijah Morris
//9-20-19
//Lab 4

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int size;
    cout << "Welcome to the multiplication table program!\n";
    cout << "\n";
    cout << "Enter the dimensions of the multiplication table(square): ";
    cin >> size;
    cout << "\n";

    for(int i = 1; i <= size; i++)
    {
        for(int j = 1; j <= size; j++)
        cout << setw(4) << i*j; 
        cout << "\n";       
    }

    cout << "\n";
    cout << "End of program\n";
    return 0;
}
