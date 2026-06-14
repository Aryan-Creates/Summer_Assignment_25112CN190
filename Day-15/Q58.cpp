//WAP to Rotate array left.

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
    
    int first = arr[0];
    for(int i = 0; i < terms - 1; i++){
        arr[i] = arr[i + 1];
    }
    arr[terms - 1] = first;
    
    cout<<"Rotated array is: ";
    for(int i = 0; i < terms; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}