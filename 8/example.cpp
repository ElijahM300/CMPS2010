#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream fout;
    fout.open("csub.ppm");
    fout << "P3\n";
    fout << "20 20\n";
    fout << "255\n";
    char blue[] = "40 180 140\n";
    char gold[] = "40 40 250\n";
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 20; j++){
            if(i % 2 == j % 2)
                fout << blue;
            else
                fout << gold;
        }
    }

    fout.close();
    cout << endl;
    return 0;
}
