//Elijah Morris
//Lab 9

#include <iostream>
#include <ctime>
using namespace std;
void display(int arr[], int size);
void random(int arr[], int size, int min, int max);
int linear_search(int arr[], int size, int number);
int binary_search(int arr[], int size, int number);
void bubblesort_Asc(int arr[], int size);
void bubblesort_Desc(int arr[], int size);
void selectsort_Asc(int arr[], int size);
void selectsort_Desc(int arr[], int size);

int main(){
    srand(time(NULL));
    char sel;
    int arr[25];
    int num;
    int numRep1;
    int numRep2;
    do{
        cout << "  Search & Sort Arrays\n";
        cout << "------------------------\n";
        cout << "0. Display\n";
        cout << "1. Unique Random Fill\n";
        cout << "2. Search\n";
        cout << "3. Sort\n";
        cout << "4. Search & Sort Facts\n";
        cout << "5. Replace\n";
        cout << "q. Quit\n";
        cout << "------------------------\n";
        cout << "Select: ";
        cin >> sel;
        switch(sel){
            case '0':
                cout << "Current Array: ";
                display(arr, 25);
                cout << "\n";
                cout << "\n";
                break;
            case '1':
                random(arr, 25, 5, 50);
                cout << "Randoms: ";
                display(arr, 25);
                cout << "\n";
                cout << "Array was filled with randoms!\n";
                cout << "\n";
                break;
            case '2':
                cout << "Array being searched: ";
                display(arr, 25);
                cout << "\n";
                cout << "What number are you looking for?: ";
                cin >> num; 
                cout << "Linear Search: ";
                linear_search(arr, 25, num);
                if(linear_search(arr, 25, num) == -1)
                     cout << num << " is not in the array! idx: " << linear_search(arr, 25, num);
                else
                    cout << num << " is in the array. idx: " << linear_search(arr, 25, num);
                cout << "\n";
                cout << "Binary Search: ";
                binary_search(arr, 25, num);
                if(binary_search(arr, 25, num) == -1){
                    cout << num << " is not in the array! idx: " << binary_search(arr, 25, num);
                    cout << "\n";
                    cout << "Sorting Array...";
                    bubblesort_Asc(arr, 25);
                    display(arr, 25);
                    cout << "\n";
                    cout << "Linear Search: ";
                    cout << num << " is in the array. idx: " << linear_search(arr, 25, num);
                    cout << "\n";
                    cout << "Binary Search: ";
                    cout << num << " is in the array. idx: " << binary_search(arr, 25, num);
                }
                else 
                    cout << num << " is in the array. idx: " << binary_search(arr, 25, num);
                cout << "\n";
                break;
            case '3':
                cout << "Old Array: ";
                display(arr, 25);
                cout << "\n";
                cout << "Bubble Asc: ";
                bubblesort_Asc(arr, 25);
                display(arr, 25);
                cout << "\n";
                cout << "Bubble Desc: ";
                bubblesort_Desc(arr, 25);
                display(arr, 25);
                cout << "\n";
                cout << "Selection Asc: ";
                selectsort_Asc(arr, 25);
                display(arr, 25);
                cout << "\n";
                cout << "Selection Desc: ";
                selectsort_Desc(arr, 25);
                display(arr, 25);
                cout << "\n";
                break;
            case '4':
                cout << "Search & Sort Facts:\n";
                cout << "1. Linear Search does not require the data to be ordered.\n";
                cout << "2. Linear Search has a worst case time complexity of O(n).\n";
                cout << "3. Binary Search does require the data to be ordered.\n";
                cout << "4. Binary Search has a worst case time complexity of O(log n).\n";
                cout << "5. Linear Search is better then Binary Search when the data is not ordered.\n";
                cout << "6. Binary Search is better than Linear Search when the data is ordered.\n";
                cout << "7. The bubble sort is inefficient for large arrays.\n";
                cout << "8. The bubble sort moves items by one element at a time.\n";
                cout << "9. The selection sort moves items immediately to their final position in the array.\n";
                break;
            case '5':
                cout << "Old Array: ";
                display(arr, 25);
                cout << "\n";
                cout << "Replace what?: ";
                cin >> numRep1;
                linear_search(arr, 25, numRep1);
                if(linear_search(arr, 25, numRep1) == -1){
                   cout << numRep1 << " doesn't exist. Enter another number: ";
                   cin >> numRep1;
                }
                cout << "Enter what?: ";
                cin >> numRep2;
                linear_search(arr, 25, numRep2);
                if(linear_search(arr, 25, numRep2) == numRep2){ 
                   cout << numRep2 << " already exists. Enter what instead?: ";
                   cin >> numRep2;
                }
                for(int replace = 0; replace < 25; replace++){
                    if(arr[replace] == linear_search(arr, 25, numRep1))
                        arr[replace] = numRep2;        
                }
                cout << "New Array: ";
                display(arr, 25);
                cout << "\n";
                break;

        }

    } while(sel != 'q');

    return 0;
}
void display(int arr[],int size){
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
void random(int arr[], int size, int min, int max){
    int range = (max - min) + 1;
    int number = rand()%range + min;
    bool dup = false;
    for(int j = 0; j < size; j++){
        arr[j] = rand()%range + min;
        for(int same; same < size; same++){
            if(arr[j] == linear_search(arr, 25, number)){
                dup = true;
                if(dup == true)
                    arr[j - 1] = rand()%range + min;
            }
        }
    }
}
int linear_search(int arr[], int size, int number){
    for(int k = 0; k < size; k++){
        if(arr[k] == number)
            return k;
    }
    return -1;
}
int binary_search(int arr[], int size, int number){
    int first = 0;
    int last = size - 1;
    int middle;
    int position = -1;
    bool found = false;

    while(!found && first <= last){
        middle = (first + last) / 2;
        if(arr[middle] == number){
            found = true;
            position = middle;
        }
        else if(arr[middle] > number)
            last = middle - 1;
        else 
            first = middle + 1;
    }
    return position;
}
void bubblesort_Asc(int arr[], int size){
    for(int m = 0; m < size - 1; m++){
        for(int l = 0; l < size - 1; l++){
            if(arr[l + 1] < arr[l]){
                int tmp = arr[l];
                arr[l] = arr[l + 1];
                arr[l + 1] = tmp;
            }
        }
    }
}
void bubblesort_Desc(int arr[], int size){
    for(int p = 0; p < size - 1; p++){
        for(int n = 0; n < size - 1; n++){
            if(arr[n + 1] > arr[n]){
                int tmp = arr[n];
                arr[n] = arr[n + 1];
                arr[n + 1] = tmp;
            }
        }
    } 
}
void selectsort_Asc(int arr[], int size){
    int minIndex; 
    int minValue;

    for(int start = 0; start < (size - 1); start++){
        minIndex = start;
        minValue = arr[start];
        for(int index = start + 1; index < size; index++){
            if(arr[index] < minValue){
                minValue = arr[index];
                minIndex = index;
            }
        }
        int tmp = arr[minIndex];
        arr[minIndex] = arr[start];
        arr[start] = tmp;
    }
}
void selectsort_Desc(int arr[], int size){
    int minIndex;
    int maxValue;

    for(int start = 0; start < (size - 1); start++){
        minIndex = start;
        maxValue = arr[start];
        for(int index = start + 1; index < size; index++){
            if(arr[index] > maxValue){
                maxValue = arr[index];
                minIndex = index;
            }
        }
        int tmp = arr[minIndex];
        arr[minIndex] = arr[start];
        arr[start] = tmp;
    }
}












