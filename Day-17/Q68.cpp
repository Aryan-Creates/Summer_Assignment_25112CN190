//WAP to Find common elements.

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

    cout << "Common elements are: ";

    for(int i = 0; i < n1; i++) {
        bool alreadyPrinted = false;
        for(int k = 0; k < i; k++) {
            if(arr1[i] == arr1[k]) {
                alreadyPrinted = true;
                break;
            }
        }

        if(alreadyPrinted)
            continue;

        for(int j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
    return 0;
}