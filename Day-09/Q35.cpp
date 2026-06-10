//WAP to Print repeated character pattern.

#include <iostream>
using namespace std;

int main(){
    int rows;
    char var='A';

    cout<<"Enter rows: ";
    cin>>rows;

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=i; j++){
            cout<<var<<" ";
        }

        var++;
        cout<<endl;
    }

    return 0;
}