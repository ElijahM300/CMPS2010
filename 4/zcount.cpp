//Elijah Morris 
//9-19-19
//Lab 4

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Lab 4 zcount program.\n";
    cout << "\n";
    cout << "Enter a number: ";
    cin >> num;
    cout << "\n";
    cout << num << endl;
    while (num > 0)
    {
        num = num - 1;
        cout << num << endl;

    }

    while (num < 0)
    {
        num = num + 1;
        cout << num << endl;

    }

    cout << "\n";
    cout << "End of program..." << endl; 

    return 0;

}
