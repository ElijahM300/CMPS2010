//Elijah Morris
//Lab 13 
//11-21-19

#include <iostream>
#include <cstring>
#include <cmath>
#include <unistd.h>
#include <iomanip>
using namespace std;
const int MAX_SIZE = 100;
#define SZ 25
struct Point{
    int x;
    int y;
};
struct Shape{
    Point center;
    double radius;
    int width;
    int height;
};
void drawCircle(char arr[][SZ], int h, int w, Shape *circle);
void drawRectangle(char arr[][SZ], int h, int w, Shape *rect);
void showArray(char arr[][SZ], int h, int w);
struct Car{
    char make[80];
    char model[80];
    int year;
    double price;
};
union Items{
    char alpha;
    int num;
    long bigNum;
    double real;
};
static union {
    char alpha;
    int num;
    long bigNum;
    double real;
};
enum Color {
    RED,
    ORANGE,
    GREEN,
    BLUE, 
    MAGENTA,
    PERIWINKLE
};
// The data type used in the statement is a constant 
// The enumerators for this type are the colors

int main(){
    char option;
    char arr[SZ][SZ];
    Car cars[35] = {
                    {"Toyota", "Prius", 2019, 23770.00},
                    {"Honda", "CRV", 2016, 19500.00},
                    {"Kia", "Stinger", 2019, 32999.99}  
                   };
    while(option != 'q'){
        cout << "Lab 13 Menu System\n";
        cout << "------------------\n";
        cout << "1. Circles\n";
        cout << "2. Car inventory\n";
        cout << "3. Union structure\n";
        cout << "4. Enumeration program\n";
        cout << "q. Quit program\n";
        cout << "------------------\n";
        cout << "Select menu option: ";
        cin >> option;
        cout << "\n";
        switch(option){
            case '1':
            {
                Shape circle;
                Shape rect;
                drawRectangle(arr, SZ, SZ, &rect);
                drawCircle(arr, SZ, SZ, &circle);
                break;
            }
            case '2':
            {
                Car nissan = {"Nissan", "Leaf", 2019, 29990}; 
                cout << "Make: " << nissan.make << endl;
                cout << "Model: " << nissan.model << endl;
                cout << "Year: " << nissan.year << endl;
                cout << "Price: $" << nissan.price << endl;
                cout << "\n";
                cout << "Make         Model     Year  Price" << endl;
                cout << "-----------  --------  ----  ----------" << endl;
                for(int i = 0; i < 1; i++){
                    cout << cars[i].make;
                    cout << setw(12) << cars[i].model;
                    cout << setw(9) << cars[i].year;
                    cout << setw(3) << "$";
                    cout << setprecision(2) << fixed;
                    cout << setw(5) << cars[i].price;
                    cout << "\n";
                }
                for(int i = 1; i < 2; i++){
                    cout << cars[i].make;
                    cout << setw(11) << cars[i].model;
                    cout << setw(11) << cars[i].year;
                    cout << setw(3) << "$";
                    cout << setprecision(2) << fixed;
                    cout << setw(2) << cars[i].price;
                    cout << "\n";
                }
                for(int i = 2; i < 3; i++){
                    cout << cars[i].make;
                    cout << setw(17) << cars[i].model;
                    cout << setw(7) << cars[i].year;
                    cout << setw(3) << "$";
                    cout << setprecision(2) << fixed;
                    cout << setw(2) << cars[i].price;
                    cout << "\n";
                }
                cout << "\n";
                break;
            }
            case '3':
            {
                Items members;
                num = 254;
                cout << "Values of Item union: " << endl;
                cout << members.alpha << endl;
                cout << members.num << endl;
                cout << members.bigNum << endl;
                cout << members.real << endl;
                cout << "Values of anonymous union: " << endl;
                cout << alpha << endl;
                cout << num << endl;
                cout << bigNum << endl;
                cout << real << endl;
                cout << "\n";    
                break;
            }
            case '4':
            {
                Color favorite = RED;
                int x = favorite;
                cout << x << endl;
                cout << ORANGE << endl;
                cout << GREEN << endl;
                cout << BLUE << endl;
                cout << MAGENTA << endl;
                cout << PERIWINKLE << endl;
                cout << "\n";
                break;

            }
        }
    }
}
void drawRectangle(char arr[][SZ], int h, int w, Shape *rect){
    bool done = false;
    rect -> center.x = SZ/2;
    rect -> center.y = 7;
    rect -> width = 5;
    rect -> height = 4;
    do{    
        memset(arr, '.', sizeof(char)*SZ*SZ);
        for(int y = 0; y < SZ; y++){
            for(int x = 0; x < SZ; x++){
                int xdiff = abs(rect -> center.x - x);
                int ydiff = abs(rect -> center.y - y);
                if((xdiff == rect -> width && ydiff < rect -> height) || 
                   (ydiff == rect -> height && xdiff < rect -> width + 1))
                    arr[y][x] = '#';
            }
        }
        showArray(arr, SZ, SZ);
        usleep(50000);
        done = true;

    } while(!done);
}
void drawCircle(char arr[][SZ], int h, int w, Shape *circle){
    bool done = false;
    circle -> center.x = SZ/2;
    circle -> center.y = SZ - 7;
    circle -> radius = 5.0;
    do{
        arr[circle -> center.y][circle -> center.x] = '#';
        for(int y = 0; y < SZ; y++){
            for(int x = 0; x < SZ; x++){
                double xdiff = x - circle -> center.x;
                double ydiff = y - circle -> center.y;
                double dist = sqrt(xdiff*xdiff + ydiff*ydiff);
                if(dist > circle -> radius - 0.5 && dist < circle -> radius + 0.5)
                    arr[y][x] = '#';
            }
        }
        showArray(arr, SZ, SZ);
        usleep(50000);
        done = true;

    } while(!done);
}
void showArray(char arr[][SZ], int h, int w){
    for(int y = 0; y < h; y++){
        for(int x = 0; x < w; x++)
            cout << arr[y][x] << arr[y][x];
        cout << endl;
    }
    cout << endl;
}














