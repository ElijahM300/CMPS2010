//Elijah Morris
//Lab 11

#include <iostream>
#include <cstring>
#include <cmath>
#include <unistd.h>
using namespace std;
#define SZ 61
int sumProduct(int *arr1, int *arr2, int size);
int sentenceLength(char *sentence);
int subStrings(char *sentence, char *str);
void drawCircle(char arr3[][SZ]);
void showArray(char arr3[][SZ], int h, int w);

int main(){
    srand(time(NULL));
    char input;
    int *arr1;
    int *arr2;
    int size;
    char mysent[100];
    char *sentence = mysent;
    char mysub[100];
    char *str = mysub;
    char arr3[SZ][SZ];
    while(input != 'q'){
        cout << "Lab 11 Menu Options\n";
        cout << "-----------------------------\n";
        cout << "1. Sum-product\n";
        cout << "2. Sentence Length\n";
        cout << "3. Sub-strings in a sequence\n";
        cout << "4. Cirlce inside a 2D array\n";
        cout << "q. Quit the program\n";
        cout << "-----------------------------\n";
        cout << "Select menu item: ";
        cin >> input;
        switch(input){
            case '1':
                arr1 = new int[size];
                arr2 = new int[size];
                cout << "How many values?: ";
                cin >> size;
                cout << "\n";
                cout << "Array 1: ";
                for(int i = 0; i < size; i++){
                    *(arr1 + i) = rand()%10;
                    cout << *(arr1 + i) << " ";
                }
                cout << "\n";
                cout << "Array 2: ";
                for(int i = 0; i < size; i++){
                    *(arr2 + i) = rand()%10;
                    cout << *(arr2 + i) << " ";
                }
                cout << "\n";
                cout << "\n";
                cout << "The sum-product of the arrays is: " << sumProduct(arr1, arr2, size) << endl;
                cout << "\n";
                delete [] arr1;
                delete [] arr2;
                break;
            case '2':
                cout << "Please enter a sentence: \n";
                cout << "\n";
                cin.ignore();
                cin.getline(mysent, 100);
                cout << "\n";
                cout << "The string-length of your sentence is: " << sentenceLength(sentence) << endl;
                cout << "\n";
                break; 
            case '3':
                cout << "Please enter a sentence: \n";
                cin.ignore();
                cin.getline(mysent, 100);
                cout << "\n";
                cout << "Now enter your sub-string to search for: \n";
                cin.ignore();
                cin.getline(str, 100);
                cout << "\n";
                cout << "Occurances found: " << subStrings(sentence, str) << endl;
                cout << "\n";
                break;
            case '4':
                drawCircle(arr3);
                break;
        }
    }
}
int sumProduct(int *arr1, int *arr2, int size){
    int sum = 0;
    for(int i = 0; i < size; i++)
        sum = sum + (*(arr1 + i)) * (*(arr2 + i));
    return sum;
}
int sentenceLength(char *sentence){
    int characters = 0;
    while(*sentence != '.'){
        sentence++;
        characters++;
    }
    characters++;
    return characters;
}
int subStrings(char *sentence, char *str){
    int occurrances = 0;
    char *strPtr;
    strPtr = strstr(sentence, str);
    while(strstr(sentence, str)){
        sentence++;
        if(strPtr){
            occurrances++;
        }
    }
        
    return occurrances;
}
void drawCircle(char arr3[][SZ]){
    int cx = SZ/2;
    int cy = SZ/2;
    double radius = 20.0;
    double inc = 0.5;
    arr3[cy][cx] = '#';
    do{
        memset(arr3, '.', sizeof(char)*SZ*SZ);
        for(int y = 0; y < SZ; y++){
            for(int x = 0; x < SZ; x++){
                double xdiff = x - cx;
                double ydiff = y - cy;
                double dist = sqrt(xdiff*xdiff + ydiff*ydiff);
                if(dist > radius - 1.0 && dist < radius + 1.0)
                    arr3[y][x] = '#';
            }
        }
        showArray(arr3, SZ, SZ);
        radius += inc;
        if(radius == 25.0){
            radius -= inc;
        }
        usleep(50000);
         
    } while(true);
}
void showArray(char arr3[][SZ], int h, int w){
    for(int y = 0; y < h; y++){
        for(int x = 0; x < w; x++)
            cout << arr3[y][x] << arr3[y][x];
        cout << endl;
    }
    cout << endl; 
}















