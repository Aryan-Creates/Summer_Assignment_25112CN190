//WAP to Remove spaces from string.

#include <iostream>
using namespace std;

int main(){
    string str, result = "";
    cout<<"Enter a string: ";
    getline(cin, str);

    for(char ch : str){
        if(ch != ' '){
            result += ch;
        }
    }
    cout<<"string without spaces: "<<result;
    return 0;
}