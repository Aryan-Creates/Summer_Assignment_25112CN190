//WAP to Union of arrays.

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

    vector<int> uni;
    
    for(int i = 0; i < n1; i++){
        bool duplicate = false;
        for(int j = 0; j < uni.size(); j++){
            if(arr1[i] == uni[j]){
                duplicate = true;
                break;
            }
        }
        if(!duplicate){
            uni.push_back(arr1[i]);
        }
    }

    for(int i = 0; i < n2; i++){
        bool duplicate = false;
        for(int j = 0; j < uni.size(); j++){
            if(arr2[i] == uni[j]){
                duplicate = true;
                break;
            }
        }
        if(!duplicate){
            uni.push_back(arr2[i]);
        }
    }

    cout<<"union array: ";
    for(int i = 0; i < uni.size(); i++){
        cout<<uni[i]<<" ";
    }
    return 0;
}