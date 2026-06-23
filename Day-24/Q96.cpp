//WAP to remove duplicate characters

#include <iostream>
using namespace std;

int main(){
    string str, result = "";

    cout << "Enter string: ";
    getline(cin, str);

    for(int i = 0; i < str.length(); i++){
        bool duplicate = false;
        for(int j = 0; j < result.length(); j++){
            if(str[i] == result[j]){
                duplicate = true;
                break;
            }
        }
        if(!duplicate)
            result += str[i];
    }
    cout << "After removing duplicates: " << result;
    return 0;
}