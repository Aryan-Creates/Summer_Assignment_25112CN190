// WAP to count digits in a number.

#include<iostream>
using namespace std;

int main(){
    int n, count=0;
    cout<<"Enter a Number: ";
    cin>>n;
    while(n!=0){
        n/=10;
        count++;
    }
    cout<<"Number of digits in the number is: "<<count<<endl;
    return 0;
}