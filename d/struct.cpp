//Elijah Morris

#include <iostream> 
#include <cstring>
using namespace std;

struct Dog{
    char name[100];
    char color[20];
    int weight;
    //constructor
    Dog(){
        color[0] = '\0';
    }
};

int main(){
    Dog d = {"Fido", "black", 20};
    Dog pet;
    strcpy(d.name, "Fido");
    cout << d.name << endl;
    cout << "Name of your pet? ";
    cin >> pet.name;
    cout << "Your pet's name is: " << pet.name << endl;
    cout << "Your pet's color: " << pet.color << endl;
    return 0;
}
