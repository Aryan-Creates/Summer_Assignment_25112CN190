//WAP to Count vowels and consonants

#include <iostream>
using namespace std;

int main(){
    string str;
    int vowels = 0, consonents = 0;
    cout<<"Enter a string: ";
    getline(cin, str);
    
    for(char ch : str){
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
            if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                vowels++;
            }
            else{
                consonents++;
            }
        }
    }
    cout<<"Vowels = "<<vowels<<endl;
    cout<<"Consonents = "<<consonents;
    
    return 0;
}