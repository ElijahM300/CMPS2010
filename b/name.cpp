#include <iostream> 
using namespace std;

int main(){
    char name[100];
    cout << "Enter your name: ";
    cin.getline(name, 100);
    //search for a whitespace
    char *ptr = name;
    while(!isspace(*ptr))
        ptr++;
    *ptr = '\0';
    char *lastname = ptr + 1;
    cout << "First name: " << name << endl;
    cout << "Last name: " << lastname << endl;

    return 0;
}



