//WAP to Print number pyramid.

#include <iostream>
using namespace std;

int main(){
    int rows;
    
    cout<<"Enter rows: ";
    cin>>rows;

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=rows-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        for(int j=i-1; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}