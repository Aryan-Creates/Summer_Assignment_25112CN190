//WAP to Count even and odd elements. 

#include <iostream>
using namespace std;

int main(){
    int terms;
    cout<<"Enter number of elements: ";
    cin>>terms;
    int arr[terms];

    for(int i = 0; i < terms; i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }

    int odd = 0, even = 0;
    for(int i = 0; i < terms; i++){
        if(arr[i] % 2 == 0) even++;
        else odd++;
    }
    cout<<"Total odd elements in array: "<<odd<<endl;
    cout<<"Total even elements in array: "<<even<<endl;
    return 0;
}