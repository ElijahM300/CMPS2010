//Elijah Morris
//9-25-19
//Homework #4 Program 3

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "3-5-bingo program.\n";
    cout << "\n";

    for(int i = 1; i <= 100; i++)
    {

        if(i%3 == 0 && i%5 == 0)
        {
            cout << i << " bingo\n";
        }
        else if(i%3 == 0)
        {
            cout << i << " three\n";
        }
        else if(i%5 == 0)
        {
            cout << i << " five\n";
        }
        else
        {
            cout << i << endl;
        }
       
    }

    return 0;

}
