//WAP to Reverse array.

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

    int temp = 0;
    for(int i = 0; i < terms/2; i++){
        temp = arr[i];
        arr[i] = arr[terms - i - 1];
        arr[terms - i - 1] = temp;
    }
    
    cout<<"Reversed array is: ";
    for(int i = 0; i < terms; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}