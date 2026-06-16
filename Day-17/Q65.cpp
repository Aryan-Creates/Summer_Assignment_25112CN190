//WAP to merge arrays.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n1;
    cout<<"Enter total elements in array 1: ";
    cin>>n1;
    vector<int> arr1(n1);

    for(int i = 0; i < n1; i++){
        cout<<"Enter element "<<i + 1<<": ";
        cin>>arr1[i];
    }

    int n2;
    cout<<"Enter total elements in array 2: ";
    cin>>n2;
    vector<int> arr2(n2);

    for(int i = 0; i < n2; i++){
        cout<<"Enter element "<<i + 1<<": ";
        cin>>arr2[i];
    }

    vector<int> merged;

    for(int i = 0; i < n1; i++){
        merged.push_back(arr1[i]);
    }

    for(int i = 0; i < n2; i++){
        merged.push_back(arr2[i]);
    }

    cout<<"Merged array: ";
    for(int i = 0; i < merged.size(); i++){
        cout<<merged[i]<<" ";
    }
    return 0;
}