#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
const char filename[] = "/usr/share/dict/cracklib-small";
int searchDictionary(char *word);

int main(){
    char word[100];
    cout << "Lab-8 Word Search\n" << "-----------------\n";
    cout << "\n";
    cout << "Enter a word: ";
    cin >> word;
    cout << endl;
    cout << "Searching dictionary...\n";
    cout << "\n";
    searchDictionary(word);
    int counter = searchDictionary(word);
    if(counter > 0){ 
        cout << "Your word \"" << word << "\" was found at line " << counter << " in the dictionary\n";
        cout << "The word just before yours is \"" << counter - 1 << "\".\n";
    }
    else
        cout << "Your word was not found\n";
    cout << "\n";
    return 0;

}
int searchDictionary(char *word){
    int correctWord = 0;
    ifstream fin;
    fin.open(filename);
    char line[100];
    fin >> line;
    while(!fin.eof()){
        fin >> line;
        correctWord++;
        if(strcmp(word, line) == 0 && strlen(word) >= 3){
            fin.close();
        }
        else if(strcmp(word, line) != 0 && strlen(word) < 3)
            return 0;
               
    }
    fin.close();
    return correctWord;
    
}
