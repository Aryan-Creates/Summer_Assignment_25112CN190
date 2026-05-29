// WAP to check whether a number is palindrome.

#include <iostream>
using namespace std;

int main(){
    int num, temp, rev=0;
    cout<<"Enter a positive number: ";
    cin>>num;
    if(num<0){
        cout<<"Please enter a positive number !";
    }
    else{
        temp=num;
        while(temp>0){
            rev=rev*10 + temp%10;
            temp/=10;
        }
        if(num==rev){
            cout<<"The number "<<num<<" is a palindrome.";
        }
        else{
            cout<<"The number "<<num<<" is not a palindrome.";
        }
    }
    return 0;
}