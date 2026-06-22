//WAP to Count words in a sentence.

#include <iostream>
using namespace std;

int main(){
    string str;
    int words = 1;

    cout<<"Enter a string: ";
    getline(cin, str);

    for(char ch : str){
        if(ch == ' '){
            words++;
        }
    }
    cout<<"Total words: "<<words;
    return 0;
}