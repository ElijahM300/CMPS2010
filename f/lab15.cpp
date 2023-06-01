//Elijah Morris
//12-5-19
//Lab 15

#include <iostream>
#include <cstring>
using namespace std;
class Array{
    int *arr;
    int size;
    int n;
public:
    ~Array(){
        delete [] arr;
    }
    Array(int sz){
        arr = new int[size];
        size = sz;
        n = 0;
    }
    Array(const Array &a2){
        size = a2.size;
        n = a2.n;
        arr = new int[size];
        for(int i = 0; i < size; i++)
            arr[i] = a2.arr[i];
    }
    void randNum(int sz){
        for(int i = 0; i < sz; i++)
            arr[i] = rand()%10 + 1;
    }
    void showArray(int sz){
        for(int i = 0; i < sz; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    void storeNum(int n, int val){
        arr[n] = val;
    }
    int getNum(int n){
        return arr[n];
    }
    int arrHigh(int sz, int n){
        for(int i = 0; i < sz; i++){
            if(arr[n] < arr[i])
                arr[n] = arr[i];
        }
        return arr[n];
    }
    int arrLow(int sz, int n){
        for(int i = 0; i < sz; i++){
            if(arr[n] > arr[i])
                arr[n] = arr[i];
        }
        return arr[n];
    }
    int arrAvg(int sz){
        double sum;
        double avg;
        for(int i = 0; i < sz; i++){
            sum = sum + arr[i]; //seems to forget to add a number for some reason
        }
        avg = (double)sum/5;
        return avg;  
    }
};
class Coin{
    char sideUp[20] = "heads";
public:
    Coin(){
        int coinToss = rand()%2;
        if(coinToss == 0)
            strcpy(sideUp, "heads");
        else
            strcpy(sideUp, "tails");
    }
    void toss(){
        int ranToss = rand()%2;  
        if(ranToss == 0){
            cout << strcpy(sideUp, "heads");
        }
        else{
            cout << strcpy(sideUp, "tails");
        }
    }
    char getSideUp(){
        return sideUp[100];
    }
};

int summation(int n);
int main(){
    srand(time(NULL));
    char option;
    int dataValues;
    int n;
    int index;
    int value;
    int tailsCount = 0;
    int headsCount = 0;
   // char heads[10] = "heads";
    Array a(dataValues);
    Array a2 = a; // initializes array with 0's for some reason
    Coin ct;
    while(option != 'q'){
        cout << "Lab 15 Menu of Options\n";
        cout << "----------------------\n";
        cout << "1. Number Array Class\n";
        cout << "2. Coin-toss Simulator\n";
        cout << "3. Array Class Copy Contructor\n";
        cout << "4. Summation(Recursive)\n";
        cout << "q. Quit Program\n";
        cout << "----------------------\n";
        cout << "Select menu option: ";
        cin >> option;
        cout << "\n";
        switch(option){
            case '1': 
                cout << "How many data values?: ";
                cin >> dataValues;
                cout << "\n";
                cout << "Populating the array with random values now...\n";
                a.randNum(dataValues);
                a.showArray(dataValues);
                cout << "\n";
                cout << "Storing the number 9 at array subscript 1...\n";
                a.storeNum(1, 9);
                a.showArray(dataValues);
                cout << "\n";
                cout << "High value: " << a.arrHigh(dataValues, 1) << endl;
                cout << "Low value: " << a.arrLow(dataValues, 1) << endl;
                cout << "Average: " << a.arrAvg(dataValues) << endl;
                cout << "\n";
                break;
            case '2':
                cout << "Coin was tossed once and landed on: "  << ct.getSideUp() << endl;
                cout << "\n";
                cout << "Tossing coin 20 more times:\n";
                cout << "\n";
                for(int i = 0; i < 20; i++){
                    ct.toss();
                    cout << ct.getSideUp() << endl;
                   // if(strcmp(ct.getSideUp(), heads) == 0)
                   //     headsCount++;
                  //  else 
                   //     tailsCount++;
                }
                cout << "\n";
                cout << "Count of heads: " << headsCount << endl;
                cout << "Count of tails: " << tailsCount << endl;
                cout << "\n"; 
                break;
            case '3':
                cout << "Creating an Array class. ";
                a.randNum(6);
                cout << "Done.\n";
                cout << "\n";
                cout << "Creating a copy of the first Array using initialization. ";
                cout << "Done.\n";
                cout << "\n";
                cout << "Data from both arrays:\n";
                cout << "#1: "; 
                a.showArray(6);
                cout << "#2: ";
                a2.showArray(6);
                cout << "\n";
                cout << "Which index would you like to change in Array #2?: ";
                cin >> index;
                cout << "New value: ";
                cin >> value;
                a2.storeNum(index, value);
                cout << "\n";
                cout << "Data from both arrays: \n";
                cout << "#1: "; 
                a.showArray(6);
                cout << "#2: ";
                a2.showArray(6);
                cout << "\n"; 
                break;
            case '4':
                cout << "Enter a value: ";
                cin >> n;
                cout << "\n";
                cout << "The summation from 1 to " << n << " is: " << summation(n) << endl;
                cout << "\n";
                break;
            


        }
    }
}
int summation(int n){
    if(n == 0){
        return n;
    }
    return n + summation(n - 1);
}








