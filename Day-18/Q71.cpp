//WAP to Binary Search.

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
        int minterm = i;
        for(int j = i + 1; j < n; j++){
            if(arr1[j] < arr1[minterm]){
                minterm = j;
            }
        }
        temp = arr1[i];
        arr1[i] = arr1[minterm];
        arr1[minterm] = temp;
    }
    
    cout<<"\nSorted array: ";
    for(int i = 0; i < n; i++){
        cout<<arr1[i]<<" ";
    }
    int key;
    cout<<"\nEnter element to find: ";
    cin>>key;
    
    int found = -1, low = 0, high = n - 1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr1[mid] == key){
            found = mid;
            break;
        }
        else if(arr1[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    if(found != -1){
        cout<<"Element found at position "<<found + 1;
    }
    else{
        cout<<"Element not found.";
    }
    return 0;
}