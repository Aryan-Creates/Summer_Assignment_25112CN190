//WAP to Remove duplicates from array. 

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
    vector<int> result;

    for(int i = 0; i < terms; i++){
        bool duplicate = false;
        for(int j = 0; j < result.size(); j++){
            if(arr[i] == result[j]){
                duplicate = true;
                break;
            }
        }
        if(!duplicate){
            result.push_back(arr[i]);
        }
    }
    cout << "Array after removing duplicates: ";
    for(int i = 0; i < result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}