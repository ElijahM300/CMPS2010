//Elijah Morris
//10-10-19
//Lab 7 

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cstring>
using namespace std;
void display(int arr[], int size);
void reset(int arr[], int size);
void random(int arr[], int size, int min, int max);
void fibonacci(int arr[], int size);
void getName(void);
int sumTo100(void);

int main(){
    srand(time(NULL));
    char sel;
    int arr[20];
    do{
        cout << "        Lab 7 - Arrays\n";
        cout << "------------------------------\n";
        cout << "0. Display\n";
        cout << "1. Reset to 0\n";
        cout << "2. Random[min, max] Fill\n";
        cout << "3. Fibonacci Fill\n";
        cout << "4. Horizontal Forward & Reverse\n";
        cout << "5. Vertical Forward & Reverse\n";
        cout << "6. Vertical Name\n";
        cout << "7. Sum to 100\n";
        cout << "q. Quit\n";
        cout << "------------------------------\n";
        cout << "Select: ";
        cin >> sel;
        switch(sel){
            case '0':
                cout << "Current Array: ";
                display(arr, 20);
                break;
            case '1':
                reset(arr, 20);
                display(arr, 20);
                cout << "Array values reset to 0\n";
                cout << "\n";
                break;
            case '2':
                int min;
                int max;
                cout << "Enter min range: ";
                cin >> min;
                cout << "Enter max range: ";
                cin >> max; 
                random(arr, 20, min, max);
                cout << "Random Numbers: ";
                display(arr, 20);
                cout << "Array was filled with random numbers!\n";
                cout << "\n";
                break;
            case '3':
                fibonacci(arr, 20);
                cout << "Fibonacci: ";
                display(arr, 20);
                cout << "Array was filled with fibonacci numbers!\n";
                cout << "\n";
                break;
            case '4':
                cout << "Forward: ";
                display(arr, 20);
                cout << "Reverse: ";
                for(int rvs = 19; rvs >= 0; rvs--){
                    cout << arr[rvs] << " ";
                }
                cout << "\n";
                cout << "\n";
                break;
            case '5':
                cout << "Vertical Display\n";
                cout << "Forward  Reverse\n";
                for(int verf : arr)
                    cout << verf << endl;
                break;
            case '6':
                getName();
                break;
            case '7':
                sumTo100();
        }

    } while(sel != 'q');

    cout << "Program is ending...\n";
    cout << "\n";
    return 0;
}
void reset(int arr[], int size){
    for(int i = 0; i < size; i++){
        arr[i] = 0;
    }
}
void display(int arr[], int size){
    for(int j = 0; j < size; j++)
        cout << arr[j] << " ";

    cout << "\n";
    cout << "\n";
}
void random(int arr[], int size, int min, int max){
    for(int k = 0; k < size; k++){
        int range = (max - min) + 1; 
        arr[k] = rand()%range + min;
    }
}
void fibonacci(int arr[], int size){
    static int fnum1 = 0;
    static int fnum2 = 1;
    static int sum = 0;
    
    for(int l = 1; l < size; l++){
        sum = fnum1 + fnum2;
        fnum1 = fnum2;
        fnum2 = sum;
        arr[0] = 1;
        arr[l] = sum;
    }
}
void getName(void){
    const int SIZE = 100;
    char name[SIZE];
    cout << "Please enter your name here: ";
    cin.ignore();
    cin.getline(name, SIZE);
    cout << "\n";
    for(int count = 0; count <= SIZE; count++){
        cout << name[count] << endl;
            
    }
}
int sumTo100(void){
    const int NUM = 10;
    int sumArr[NUM];
    int total;
    cout << "Filling the array with random values...\n";
    cout << "\n";
    cout << "Array\n" << "-----\n";
    for(int rnd = 0; rnd < NUM; rnd++){
        sumArr[rnd] = rand()%100 + NUM;
        cout << sumArr[rnd] << endl;
    }
    cout << "Total\n" << "-----\n";
    for(int val : sumArr){
        total = total + val;
        while(total != 100){
            total = total + val;
            cout << total << endl;
            return val;
        }   
    } 
}





