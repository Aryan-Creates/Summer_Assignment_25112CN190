//WAP to Find missing number in array. 

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int terms;
    cout<<"Enter number of elements: ";
    cin>>terms;
    vector<int> arr(terms - 1);

    for(int i = 0; i < terms - 1; i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }

    int totalsum = terms * (terms + 1)/2;
    int sum = 0;
    for(int i = 0; i < terms - 1; i++){
        sum += arr[i];
    }
    
    int missingNum = totalsum - sum;
    cout<<"Missing number is: "<<missingNum;
    return 0;
}