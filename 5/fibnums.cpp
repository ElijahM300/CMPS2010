//Elijah Morris
//10-2-19
//Homework #5 Fibonacci

#include <iostream>
using namespace std;
int get_next_fibnum();

int main(){
    int n;
    cout << "How many fibonacci numbers to see?: ";
    cin >> n;
    cout << "\n";
    for(int i = 0; i < n; i++){
        cout << get_next_fibnum() << " ";
    }
    cout << endl;
    cout << "\n";
    return 0;
}

int get_next_fibnum(){
    static int previous_fnum1 = 1;
    static int previous_fnum2 = 1;
    static int n = 0;
    if(n == 0 || n == 1){
        n++;
        return 1;
    }
    n = previous_fnum1 + previous_fnum2;
    int tmp = n;
    int tmp2 = previous_fnum2;
    previous_fnum2 = tmp;
    previous_fnum1 = tmp2;

    return previous_fnum1 + previous_fnum2;
}
