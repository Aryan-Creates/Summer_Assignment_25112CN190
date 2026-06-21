//WAP to Find string length without strlen().

#include <iostream>
using namespace std;

int main(){
    string str;

    cout<<"Enter a string: ";
    getline(cin, str);
    
    int length = 0;
    for(char ch: str){
        length++;
    }
    
    cout<<"Length of string = "<<length;
    return 0;
}