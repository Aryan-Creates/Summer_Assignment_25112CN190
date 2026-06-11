//WAP to Write function for palindrome.

#include <iostream>
using namespace std;

bool palindrome(int num){
    int n=num; 
    int rev=0;
    while(n>0){
        rev = rev*10 + n%10;
        n/=10;
    }
    if(rev == num)
    return true;
    else
    return false;
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(palindrome(num))
    cout<<num<<" is a palindrome number.";
    else
    cout<<num<<" is not a palindrome number.";

    return 0;
}