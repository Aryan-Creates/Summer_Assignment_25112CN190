//WAP to Second largest element.

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

    int largest = arr[0], seclargest = arr[0];
    for(int i = 0; i < terms; i++){
        if(arr[i] > largest){
            seclargest = largest; 
            largest = arr[i];
        }
        else if(arr[i] > seclargest && arr[i] != largest){
            seclargest = arr[i];
        }
    }
    cout<<"The second largest element is: "<<seclargest;
    return 0;
}