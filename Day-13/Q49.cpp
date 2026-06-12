//WAP to Input and display array.

#include <iostream>
using namespace std;

int main(){
    int terms;
    cout<<"Enter number of elements: ";
    cin>>terms;
    int arr[terms];

    for(int i = 0; i < terms; i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
    
    cout<<"The array entered is as follows: ";
    for(int i = 0; i < terms; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}