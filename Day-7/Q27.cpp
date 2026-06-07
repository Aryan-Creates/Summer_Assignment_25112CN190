//WAP to Recursive sum of digits.

#include <iostream>
using namespace std;

int sumOFdigits(int num){

    if(num==0){
        return 0;
    }
    return num%10 + sumOFdigits(num/10);
}

int main(){
    int num;
    
    cout<<"Enter a number: ";
    cin>>num;

    if(num<0){
        cout<<"Please enter a positive number.";
        return 0;
    }
    
    cout<<"The sum of digits of "<<num<<" is: "<<sumOFdigits(num);
    return 0;
}