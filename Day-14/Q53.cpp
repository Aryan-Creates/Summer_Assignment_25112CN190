//WAP to Linear search.

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
    cout<<"Enter element to search: ";
    cin>>element;

    int flag = -1;
    for(int i = 0; i < terms; i++){
        if(arr[i] == element){
            cout<<"Element found at position: "<<i+1;
            flag = 1;
            break;
        }
    }

    if(flag == -1) cout<<"Element not found.";
    return 0;
}