//WAP to Print reverse star pattern.

#include <iostream>
using namespace std;

int main(){
    int rows;
    
    cout<<"Enter rows: ";
    cin>>rows;

    for(int i=1; i<=rows; i++){
        for(int j=rows; j>=i; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}