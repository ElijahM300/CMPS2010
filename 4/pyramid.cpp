//Elijah Morris
//9-25-19
//Homework #4 Program 4

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int height;
    cout << "Enter pyramid height: ";
    cin >> height;
    cout << "\n";

    for(int i = 1; i <= height; i++){
        for(int space = 0; space <= height - i; space++){
            cout << " ";
        }
    
        for(int stars = 0; stars < 2 * i - 1; stars++){
            cout << "*";

        }

        cout << "\n";
    }       
    return 0;
}
