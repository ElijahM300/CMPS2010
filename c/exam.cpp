//Elijah Morris
//Programming Exam 

#include <iostream>
#include <cstring>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
    srand(time(NULL));
    int arr[100];
    int size;
    char name[100];
    for(int i = 0; i < 20; i++)
        arr[i] = rand()%10 + 1;
    cout << "Please enter your full name: ";
    cin.getline(name, 100);
    char *ptr = name;
    while(!isspace(*ptr))
        ptr++;
    *ptr = '\0';
    cout << "\n";
    cout << "Hi " << name << ", how many random values do you want?: ";
    cin >> size;
    cout << "\n";
    cout << "Your random values are: \n";
    cout << "\n";
    int total = 0;
    double average = 0;
    for(int i = 0; i < size; i++){
        total = total + *(arr + i);
        cout << *(arr + i) << " ";
    }
    average = (double)total/size;
    cout << "\n";
    cout << "\n";
    cout << "The sum is: " << total << endl;
    cout << "The average is: " << average << setprecision(4) << endl;
    cout << "\n";
    cout << "Hey " << name << ", " << endl;
    cout << "\n";
    ofstream outputFile;
    outputFile.open("numbers.dat");
    for(int i = 0; i < size; i++)
        outputFile << arr[i] << " ";
    outputFile.close();
    cout << "Your numbers have been saved in a file named: numbers.dat" << endl;
    cout << "Did you know that you last name starts with an " << ptr + 1 << "?" << endl;
    cout << "Your first name has " << strlen(name) << " letters." << endl;
    cout << "Yout last name has " << strlen(ptr + 1) << " letters." << endl;
    cout << "\n";
    cout << "Thanks, \n";
    cout << "Program complete.\n";
    return 0;
}




















