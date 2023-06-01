//Elijah Morris 
//9-24-19
//Homework #4 Program 1

#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    int num3;
    cout << "This program arranges numbers in order from low to high\n";
    cout << "\n";
    cout << "Please enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "\n";
    
if(num1 < num2 && num2 < num3) 
    {
        cout << "Your numbers in order are: " << num1 << " " << num2 << " " << num3 << endl;

    }

    else if(num2 < num1 && num1 < num3)
    {
        cout << "Your numbers in order are: " << num2 << " " << num1 << " " << num3 << endl;

    }

    else if(num3 < num2 || num2 < num1)
    {
        cout << "Your numbers in order are: " << num3 << " " << num2 << " " << num1 << endl;

    }

    else 
    {
        cout << "Your numbers in order are: " << num2 << " " << num3 << " " << num1 << endl;
       

    }

    cout << "\n";
    cout << "End of program...\n";
    
    return 0;

}
