//WAP to move zeros to end.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int terms;
    cout<<"Enter number of elements: ";
    cin>>terms;
    vector<int> arr(terms);

    for(int i = 0; i < terms; i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }

    int pos = 0;

    for(int i = 0; i < terms; i++){
        if(arr[i] != 0){
            arr[pos] = arr[i];
            pos++;
        }
    }
    while(pos < terms){
        arr[pos] = 0;
        pos++;
    }

    cout<<"Array after moving zeros to end: ";
    for(int i = 0; i < terms; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}