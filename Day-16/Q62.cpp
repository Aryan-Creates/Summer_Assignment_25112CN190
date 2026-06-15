//WAP program to Find maximum frequency element. 

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

    int maxFreq = 0;
    int maxElemennt = arr[0];

    for(int i = 0; i < terms; i++){
        int count = 0;
        for(int j = 0; j < terms; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        
        if(count > maxFreq){
            maxFreq = count;
            maxElemennt = arr[i];
        }
    }
    
    cout<<"Element with max frequency: "<<maxElemennt<<endl;
    cout<<"Frequency: "<<maxFreq;
    return 0;
}