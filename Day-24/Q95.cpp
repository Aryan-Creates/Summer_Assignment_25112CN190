//WAP to find longest word in sentence.

#include <iostream>
using namespace std;

int main(){
    string str, word = "", longest = "";

    cout<<"Enter a sentence: ";
    getline(cin, str);
    str += " ";

    for(char ch : str){
        if(ch != ' '){
            word += ch;
        }
        else{
            if(word.length() > longest.length()){
                longest = word;
            }
            word = "";
        }
    }
    cout<<"Longest word = "<<longest;
    return 0;
}