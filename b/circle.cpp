#include <iostream>
#include <cstring>
#include <cmath>
#include <unistd.h>
using namespace std;
#define SZ 61
void showArray(char arr[][SZ], int h, int w);

int main(){
    char arr[SZ][SZ];
    int cx = SZ/2;
    int cy = SZ/2;
    double radius = 20.0;
    double inc = 0.5;
    arr[cy][cx] = '#';
    do{
        //draw circle
        memset(arr, '.', sizeof(char)*SZ*SZ);
        for(int y = 0; y < SZ; y++){
            for(int x = 0; x < SZ; x++){
                double xdiff = x - cx;
                double ydiff = y - cy;
                double dist = sqrt(xdiff*xdiff + ydiff*ydiff);
                if(dist > radius - 1.0 && dist < radius + 1.0)
                    arr[y][x] = '#';
            }   
        }
        showArray(arr, SZ, SZ);
        radius += inc;
        if(radius == 28.0){
            radius -= inc;
        }
        usleep(50000);

    } while(true);

    return 0;
}
void showArray(char arr[][SZ], int h, int w){
    for(int y = 0; y < h; y++){
       for(int x = 0; x < w; x++){
          cout << arr[y][x] << arr[y][x];
       }
       cout << endl; 
    }
    cout << endl;
}

