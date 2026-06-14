//WAP to Find duplicates in array. 

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

    cout<<"Duplicate Elements are: ";
    for(int i = 0; i < terms; i++){
        bool alreadyPrinted = false;
        for(int k = 0; k < i; k++){
            if(arr[i] == arr[k]){
                alreadyPrinted = true;
                break;
            }
        }
        
        if(alreadyPrinted){
            continue;
        }

        for(int j = i + 1; j < terms; j++){
            if(arr[i] == arr[j]){
                cout<<arr[i]<<" ";
                break;
            }
        }
    }
    return 0;
}