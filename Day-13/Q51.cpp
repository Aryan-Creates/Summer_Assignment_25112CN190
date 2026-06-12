//WAP to Find largest and smallest element.

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

    int largest = arr[0], smallest = arr[0];
    for(int i = 0; i < terms; i++){

        if(arr[i] > largest)
        largest = arr[i];
        if(arr[i] < smallest)
        smallest = arr[i];

    }

    cout<<"Largest element of array is: "<<largest<<endl;
    cout<<"Smallest element of array is: "<<smallest<<endl;
    return 0;
}