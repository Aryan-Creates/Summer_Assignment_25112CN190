//WAP to Recursive reverse number.

#include <iostream>
using namespace std;

int reverseNum(int num, int rev=0){
    
    if(num==0){
        return rev;
    }
    
    rev = rev*10 + num%10;
    return reverseNum(num/10, rev);
}

int main(){
    int num;
    
    cout<<"Enter a number: ";
    cin>>num;

    if(num<0){
        cout<<"Please enter a non-negative number.";
        return 0;
    }

    cout<<"Reversed number: "<<reverseNum(num);
    return 0;
}