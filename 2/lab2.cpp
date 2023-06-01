//Elijah Morris
#include <iostream>
using namespace std;

int main()
{
    int number;
    float realNum;
    
    cout << "Enter an integer number: ";
    
    cin >> number;

    cout << "Enter a float number: ";

    cin >> realNum;

    cout << "You entered the integer " << number << " and the float " << realNum << endl;

    cout << " " << endl;

    cout << "Here are some calculations:" << endl;

    cout << "int + float: " << number + realNum << endl;

    cout << "int - float: " << number - realNum << endl;

    cout << "int * float: " << number * realNum << endl;

    cout << "int / float: " << number / realNum << endl;
    
    int integerInput = number;
    float realInput = realNum;
    int intCalc1 = integerInput + realInput;
    int intCalc2 = integerInput - realInput;
    int intCalc3 = integerInput * realInput;
    int intCalc4 = integerInput / realInput;

    cout << " " << endl;

    cout << "Output of integer variables..." << endl;

    cout << "int + real: " << intCalc1 << endl;

    cout << "int - real: " << intCalc2 << endl;
   
    cout << "int * real: " << intCalc3 << endl;

    cout << "int / real: " << intCalc4 << endl;

    float floatCalc1 = integerInput + realInput;
    float floatCalc2 = integerInput - realInput;
    float floatCalc3 = integerInput * realInput;
    float floatCalc4 = integerInput / realInput;

    cout<< " " << endl;

    cout << "Output of float variables..." << endl;

    cout << "int + real: " << floatCalc1 << endl;

    cout << "int - real: " << floatCalc2 << endl;

    cout << "int * real: " << floatCalc3 << endl;

    cout << "int / real: " << floatCalc4 << endl;

    cout << " " << endl;

    cout << "End of program" << endl;

    return 0;
}
