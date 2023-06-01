#include <iostream>
#include <unistd.h>
using namespace std;

int main(){
    cout << "Lab 14 Hexadecimal Numbers\n";
    cout << "--------------------------\n\n";
    void count();
    count();
    return 0;
}
void count(){
    cout << "Counting to 0xE\n";
    cout << "                        123456789abcdef\n";
    cout << "For-loop is running now ";
    for(int i = 0x0; i < 0xE; i++){
        cout << "." << flush;
        usleep(125000); 
    }
    cout << "\n\n";
    cout << "For-loop has finished.\n";
}
