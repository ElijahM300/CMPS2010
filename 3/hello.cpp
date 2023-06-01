//Elijah
#include <iostream>
using namespace std;

int main(void)
{
    int a = 50;
    int b = 100;
    int sum = 0;
    sum = sum + a;
    sum = sum + b;
    int inp;
    cout << "Input a number: ";
    cin >> inp;

    if ( a <= b ){
         if ( inp > 10 ){
             cout << "Changing a\n";
             a = b * 2;
             cout << "a: " << a << endl;
        }
    }    
       
    else
        cout << "Not equal\n";
    return 0;

}
