//Elijah Morris

#include <iostream>
#include <cstring>
using namespace std;
const int MAX_CARS = 100;

struct Car{
    char make[40];
    char model[40];
    int year;
    int color;
};
void getMakeName(Car *cars);
void getModelNames(Car arr[], int *n);

int main(){
    //Car car;
    Car cars[MAX_CARS];
    for(int i = 0; i < 2; i++){
        cout << "Make of car #" << i + 1 << ": ";
        getMakeName(&cars[i]);
    }
    for(int i = 0; i < 2; i++)
        cout << cars[i].make << endl;
    int n = 0;
    getModelNames(cars, &n);
    for(int i = 0; i < 2; i++)
        cout << cars[i].model << endl;
    cout << n << " car models." << endl;
    cout << endl;

    return 0;
}
void getMakeName(Car *cars){
    cin >> cars -> make;

}
void getModelNames(Car arr[], int *n){
    for(int i = 0; i < 2; i++){
        cout << "Model of car #" << i + 1 << ": ";
        cin >> arr[i].model;
        (*n)++;
    }
}
