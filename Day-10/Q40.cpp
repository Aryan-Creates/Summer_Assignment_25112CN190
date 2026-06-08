//Write a program to Print character pyramid.

#include <iostream>
using namespace std;

int main(){
    int rows;
    char var='A';
    cout<<"Enter rows: ";
    cin>>rows;

    for(int i=1; i<=rows; i++){
        var='A';
        for(int j=1; j<=rows-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<var;
            var++;
        }
        var='A'+i-2;
        for(int j=i-1; j>=1; j--){
            cout<<var;
            var--;
        }
        cout<<endl;
    }
    return 0;
}