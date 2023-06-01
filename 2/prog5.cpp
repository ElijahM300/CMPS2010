//Elijah Morris
//9-7-19
//Hw Program 5

#include <iostream>
using namespace std;

int main()

{
    int val1 = 24;
    int val2 = 28;
    int val3 = 32;
    int val4 = 33;
    int val5 = 37;
    float sum = val1 + val2 + val3 + val4 + val5;
    float average = sum / 5;
    
    cout << "This program takes five different values, displays their sum, and then their average.\n";
    cout << "\n";
    cout << "The values are " << val1 << ", " << val2 << ", " << val3 << ", "  << val4 << ", and " << val5 << endl;
    cout << "The sum of all the values is " << sum << endl;
    cout << "The average of all the values is " << average << endl;
    cout << " " << endl;
    cout << "End of program" << endl; 


}
