//WAP to bubble sort.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    vector<int> arr1(n);
    
    for(int i = 0; i < n; i++){
        cout<<"Enter element "<<i + 1<<": ";
        cin>>arr1[i];
    }
    cout<<"Entered array: ";
    for(int i = 0; i < n; i++){
        cout<<arr1[i]<<" ";
    }
    
    int temp;
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(arr1[j] > arr1[j + 1]){
                temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
        }
    }
    cout<<"\nSorted array: ";
    for(int i = 0; i < n; i++){
        cout<<arr1[i]<<" ";
    }
    return 0;
}