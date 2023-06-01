//Elijah Morris
//Homework #5

#include <iostream>
using namespace std;

int main(){
    int height;
    cout << "How high are your pyramids?: ";
    cin >> height;
    cout << "\n";

    for(int i = 1; i <= height; i++){
        int left_gap = height - 1;
        int mid_gap = height * 2;
        for(int j = 0; j <= left_gap; j++){
            cout << " ";
            left_gap = height - i;
        }
        for(int stars = 1; stars < 2 * i; stars++){
            cout << "*"; 

        }
        for(int k = 0; k <= mid_gap; k++){
            cout << " ";
            mid_gap = ((height * 2) - i) - i;
        }
        for(int stars = 1; stars < 2 * i; stars++){
            cout << "*";
        }
        cout << "\n";
     }

    return 0;
}
