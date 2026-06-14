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
    
    int last = arr[terms - 1];
    for(int i = terms - 1; i > 0; i--){
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
    
    cout<<"Rotated array is: ";
    for(int i = 0; i < terms; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}