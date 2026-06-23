//WAP to compress string.

#include <iostream>
using namespace std;

int main(){
    string str;

    cout<<"Enter string: ";
    cin>>str;

    int count = 1;
    for(int i = 0; i < str.length(); i++){
        while (i < str.length() - 1 && str[i] == str[i + 1]){
            count++;
            i++;
        }
        cout<<str[i]<<count;
        count = 1;
    }
    return 0;
}