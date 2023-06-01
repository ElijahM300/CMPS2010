//Elijah Morris
//Lab 8 Order Program

#include <iostream>
#include <fstream>
#include <cstring>
#include <ctime>
using namespace std;
int bubbleSort(int arr[], int n);

int main(){
    int arr[100];
    int n;
    srand(time(NULL));
    cout << "Lab 8 Ordered Numbers\n";
    cout << "---------------------\n";
    cout << "\n";
    cout << "How many numbers to generate?: ";
    cin >> n;
    int randArr[100];
    cout << "Generating random values now.\n";
    for(int i = 0; i <= n; i++){
        int min = 10;
        int max = 50;
        int range = (max - min) + 1;
        randArr[i] = rand()%range + min;
    }
    cout << "Writing to random.dat.\n";
    ofstream outputFile;
    outputFile.open("random.dat"); 
    for(int count = 0; count < n; count++)
        outputFile << randArr[count] << " ";
    outputFile.close();
    cout << "Reading from random.dat.\n";
    ifstream inputFile;
    inputFile.open("random.dat");
    for(int count = 0; count < n; count++)
        inputFile >> arr[count];
    inputFile.close();
    cout << "Sorting the numbers.\n";
    bubbleSort(arr, n);
    return 0;
}
int bubbleSort(int arr[], int n){
    for(int k = 0; k < n - 1; k++){
        for(int j = 0; j < n - 1; j++){
            if(arr[j + 1] < arr[j]){
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    cout << "Writing to ordered.dat.\n";
    ofstream outputFile;
    outputFile.open("ordered.dat");
    for(int count = 0; count < n; count++)
        outputFile << arr[count] << " ";
    outputFile.close();
    cout << "Run complete.\n";
    cout << "\n";
    cout << "Please look in the ordered.dat file for your numbers.\n";
    return 0;
}
