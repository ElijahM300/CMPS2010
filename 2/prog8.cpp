//Elijah Morris
//9-7-19
//Hw Program 8

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float item1 = 15.95;
    float item2 = 24.95;
    float item3 = 6.95;
    float item4 = 12.95;
    float item5 = 3.95;
    float subtotal = item1 + item2 + item3 + item4 + item5;
    float salesTax = subtotal * 0.07;
    float total = subtotal + salesTax;
    
    cout << "This program takes the prices of five different items, displays their subtotals, the\n";
    cout << "sales tax on the items, and then the total price of all the items.\n";
    cout << "\n";
    cout << "The price of item 1 is $" << item1 << endl;
    cout << "The price of item 2 is $" << item2 << endl;
    cout << "The price of item 3 is $" << item3 << endl;
    cout << "The price of item 4 is $" << item4 << endl;
    cout << "The proce of item 5 is $" << item5 << endl;
    cout << " " << endl;
    cout << "The subtotal is $" << subtotal << endl;
    cout << "The sales tax is $" << setprecision(3) << salesTax << endl;
    cout << "The total of the sale is $" << setprecision(4) << total << endl;
    cout << " " << endl;
    cout << "End of program" << endl;

    return 0; 


}
