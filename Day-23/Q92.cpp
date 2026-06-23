//WAP to find maximum occurring character.

#include <iostream>
using namespace std;

int main(){
    string str;

    cout<<"Enter a string: ";
    getline(cin, str);

    char maxchar;
    int maxcount = 0;

    for(int i = 0; i < str.length(); i++){
        int count = 0;
        for(int j = 0; j < str.length(); j++){
            if(str[i] == str[j]){
                count++;
            }
        }
        if(count > maxcount){
            maxcount = count;
            maxchar = str[i];
        }
    }
    cout<<"Maximum occurring character: "<<maxchar<<endl;
    cout<<"Frequency: "<<maxcount;
    return 0;
}