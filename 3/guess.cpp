//Elijah Morris
//9-12-19
//Lab 3

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));

    int num;
    int randomNum = rand() % 10 + 1;

    cout << "This program simulates a number guessing game.\n";
    cout << "\n";
    cout << "Enter a number between 1 and 10: ";
top: 
    cin >> num;
    cout << "\n";

    if (num < 1 || num > 10)
    {
        cout << "Sorry but that number was out of range. Try again: ";
        goto top;
        
    }

    else if (num == randomNum)
    {    
        cout << "Nice Job, you win!\n";
    }   

    else if (num < randomNum)
    {    
        cout << "Your guess is low. Try again: ";
        goto top;
    }

    else
    {
        cout << "Your guess is high. Try again: ";
        goto top;
    
    }

    cout << "\n";
    cout << "----------------------------\n";
    cout << "Data sizes are listed below:\n";
    cout << "Int: " << sizeof(int) << endl;
    cout << "Long: " << sizeof(long) << endl;
    cout << "Float: " << sizeof(float) << endl;
    cout << "Double: " << sizeof(double) << endl;

    return 0;        

}
