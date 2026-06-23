//WAP to check string rotation.

#include <iostream>
using namespace std;

int main(){
    string str1, str2;

    cout<<"Enter string 1: ";
    cin>>str1;
    cout<<"Enter string 2: ";
    cin>>str2;

    if(str1.length() != str2.length()){
        cout<<"Not rotation";
        return 0;
    }

    string temp = str1 + str1;

    if(temp.find(str2) != string::npos){
        cout<<"Rotation";
    }
    else{
        cout<<"Not rotation";
    }
    return 0;
}