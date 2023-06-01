//Elijah Morris
//9-26-19
//Lab 5 Program 1

#include <iostream>
using namespace std;
bool isPositive(int num);

int main(){
    int num1, num2, num3;
    cout << "Please enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "The numbers are: ";
    isPositive(num1) ? cout << "positive, " : cout << "negative, ";
    isPositive(num2) ? cout << "positive, " : cout << "negative, ";
    isPositive(num3) ? cout << "positive. " : cout << "negative. ";
    cout << "\n";
    return 0;
}

bool isPositive(int num){
    bool positive;
    if(num >= 0){
        positive = true;
    } 
    else{
        positive = false;
    }

    return positive;
}

