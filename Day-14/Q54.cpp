//WAP to Frequency of an element.

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

    int element;
    cout<<"Enter element to find frequency: ";
    cin>>element;
    
    int frequency = 0;
    for(int i = 0; i < terms; i++){
        if(arr[i] == element){
            frequency++;
        }
    }
    cout<<"Frequency of the element is: "<<frequency;
    return 0;
}