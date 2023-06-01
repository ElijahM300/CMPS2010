//Elijah Morris 
//9-19-19
//Lab 4

#include <iostream>
using namespace std;

int main()
{
    int userInp;
    int total = 0; 
    int high = 0;
    cout << "Lab 4 highnum program\n";
    cout << "\n";
    cout << "Enter a number: ";
    cin >> userInp;
    cout << "\n";
    high = userInp;
    cout << high << " is your highest number so far!\n";
    cout << high << " is the total\n";
    cout << "\n";

    while(userInp != 0)
    {
      total = total + userInp;
      if (userInp > high)
      {
        high = userInp; 
        cout << "\n";
        cout << "   " << high << " is your highest number so far!\n";
        cout << "   " << total << " is the total\n";
        cout << "\n";
      }
        cout << "Enter a number: ";
        cin >> userInp;
    } 

    cout << "\n";
    cout << "Program is ending...\n";
    cout << "\n";
    cout << "   " << high << " was your highest number\n";
    cout << "   " << total << " was the total\n";

    return 0;

}
