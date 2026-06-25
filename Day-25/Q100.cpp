//WAP to sort words by length

#include <iostream>
using namespace std;

int main(){
    string words[] = {"mbappe", "halaand", "ronaldo", "cat"};
    int n = 4;
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(words[j].length() > words[j + 1].length()){
                swap(words[j], words[j + 1]);
            }
        }
    }
    cout<<"Sorted Words by length: "<<endl;
    for(int i = 0; i < n; i++){
        cout<<words[i]<<endl;
    }
    return 0;
}