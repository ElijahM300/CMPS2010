//Elijah Morris
//9-26-19
//Lab 5 Program 3

#include <iostream>
#include <cctype>
using namespace std;
void showAlphabet(int n, bool upperCase);

int main(){
    int n;
    bool upperCase = true;
    cout << "How many letters to see: ";
    cin >> n;
    cout << "\n";
    showAlphabet(n, upperCase);
    cout << "\n";
    cout << "\n";

    return 0;
}
void showAlphabet(int n, bool upperCase){
    char letter = 'A';
    char upOrLow;
    cout << "Upper case or lower case(U/L)?";
    cin >> upOrLow;
    cout << "\n";

    if(upOrLow == 'U' || upOrLow == 'u'){
        upperCase = true;
        letter = toupper(letter);
    }

    else if(upOrLow == 'L' || upOrLow == 'l'){
        upperCase = false;
        letter = tolower(letter);
    }

    for(int alpha = 0; alpha < n; alpha++){
        int dash = 0;
        if(dash < alpha){
            cout << "-";
        }
        cout << letter;
        letter++;
    }

}

