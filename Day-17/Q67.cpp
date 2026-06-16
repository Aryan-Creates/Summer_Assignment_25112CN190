//WAP to Intersection of arrays.

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

    vector<int> inter;
    for(int i = 0; i < n1; i++){
        bool found = false;
        for(int j = 0; j < n2; j++){
            if(arr1[i] == arr2[j]){
                found = true;
                break;
            }
        }
        bool duplicate = false;
        for(int k = 0; k < inter.size(); k++){
            if(arr1[i] == inter[k]){
                duplicate = true;
                break;
            }
        }
        if(found && !duplicate){
            inter.push_back(arr1[i]);
        }
    }

    cout << "Intersection of arrays: ";
    for(int i = 0; i < inter.size(); i++) {
        cout<<inter[i]<<" ";
    }
    return 0;
}