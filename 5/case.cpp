//Elijah Morris
//9-26-19
//Lab 5 Program 2 

#include <iostream>
#include <cctype>
using namespace std;
char changeCase(char letter);

int main(){
    char alpLetter;
    cout << "Please enter an alphabetic letter: ";
    cin >> alpLetter;
    changeCase(alpLetter) ? alpLetter = tolower(alpLetter) : alpLetter = toupper(alpLetter);
    cout << "The toggled letter is: " << alpLetter << endl;

}
char changeCase(char letter){
    bool upper;
    if(isupper(letter)){
        upper = true;
    }
    else{
        upper = false;
    }

    return upper;
}
