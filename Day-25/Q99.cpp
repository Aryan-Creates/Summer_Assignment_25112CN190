//WAP to sort names alphabatically

#include <iostream>
using namespace std;

int main(){
    string names[] = {"mbappe", "halaand", "ronaldo", "messi"};
    int n = 4;
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(names[j] > names[j + 1]){
                swap(names[j], names[j + 1]);
            }
        }
    }
    cout<<"Sorted Names: "<<endl;
    for(int i = 0; i < n; i++){
        cout<<names[i]<<endl;
    }
    return 0;
}