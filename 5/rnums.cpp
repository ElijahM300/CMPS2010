//Elijah Morris
//10-2-19
//Lab 5 Program 4

#include <iostream>
#include <cstdlib>
using namespace std;
int getRand(int, int);

int main(){
    int start;
    int range;
    int n;
    srand(time(NULL));
    cout << "Please enter start and end of range, and n: ";
    cin >> start >> range >> n;
    cout << "\n";    
    cout << n << " random numbers from " << start << " to " << range << ":" << endl;
    
    for(int i = 0; i < n; i++){
        cout << getRand(start,(range - start) + 1) << " ";
    }

    cout << "\n";

    return 0;
}

int getRand(int start, int range){
    int randNums = rand()%range + start;
    return randNums;
}
