//WAP to Find pair with given sum. 

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
    int sum;
    cout<<"Enter required sum: ";
    cin>>sum;
    bool found = false;

    for(int i = 0; i < terms; i++){
        for(int j = i + 1; j < terms; j++){
            if(arr[i] + arr[j] == sum){
                cout<<"Pair found: "<<arr[i]<<" and "<<arr[j]<<endl;
                found = true;
            }
        }
    }
    if(!found){
        cout<<"Pair not found.";
    }
    return 0;
}