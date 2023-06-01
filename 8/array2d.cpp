//Elijah Morris
//Lab 8 2-D Array Program

#include <iostream>
#include <fstream>
#include <cstring>
#include <ctime>
using namespace std;

int const ROWS = 4;
int const COLUMNS = 5;
int getTotal(int myArr[][COLUMNS], int ROWS, int COLUMNS);
int getRowTotal(int myArr[][COLUMNS], int ROWS, int COLUMNS, int rn);
int getColumnTotal(int myArr[][COLUMNS], int ROWS, int COLUMNS, int cn);

int main(){
    int myArr[ROWS][COLUMNS];
    int rn;
    int cn;
    srand(time(NULL));
    cout << "Lab 8 2D Array\n";
    cout << "--------------\n";
    cout << "\n";
    cout << "The array\n";
    cout << "\n";
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLUMNS; j++){
            int min = 0;
            int max = 9;
            int range = (max - min) + 1;
            myArr[i][j] = rand()%range + min;
            cout <<  myArr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n";
    cout << "Sum of all array elements: " << getTotal(myArr, ROWS, COLUMNS) << endl;
    cout << "\n";
    cout << "Enter a row number: ";
    cin >> rn;
    cout << "Sum of row " << rn - 1 << " elements is: " << getRowTotal(myArr, ROWS, COLUMNS, rn) << endl;
    cout << "\n";
    cout << "Enter a column number: ";
    cin >> cn;
    cout << "Sum of column " << cn - 1 << " elements is: " << getColumnTotal(myArr, ROWS, COLUMNS, cn) << endl;
    cout << "\n";
    cout << "Program complete.\n";
    return 0;
}
int getTotal(int myArr[][COLUMNS], int ROWS, int COLUMNS){
    int sum = 0;
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLUMNS; j++)
            sum = sum + myArr[i][j];
    }
    return sum;
}
int getRowTotal(int myArr[][COLUMNS], int ROWS, int COLUMNS, int rn){
    int rsum = 0;
    for(int k = 0; k < COLUMNS; k++)
        rsum = rsum + myArr[rn - 1][k];
    return rsum;
}
int getColumnTotal(int myArr[][COLUMNS], int ROWS, int COLUMNS, int cn){
    int csum = 0;
    for(int l = 0; l < ROWS; l++)
        csum = csum + myArr[l][cn - 1];
    return csum;
}
















