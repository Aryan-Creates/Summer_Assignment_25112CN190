//WAP to Find sum and average of array.

#include <iostream>
using namespace std;

int main(){
    int terms, sum = 0;
    cout<<"Enter number of elements: ";
    cin>>terms;
    int arr[terms];

    for(int i = 0; i < terms; i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
    for(int i = 0; i < terms; i++){
        sum += arr[i];
    }
    cout<<"Sum of array: "<<sum<<endl;
    cout<<"Average of array: "<<sum/terms;
    return 0;
}