// WAP to find product of digits of a number.

#include <iostream>
using namespace std;

int main(){
    int num, product = 1;
    
    cout<<"Enter a positive number: ";
    cin>>num;
    
    if(num==0){
        cout<<"Product of digits is: 0";
    }
    else if(num<0){
        cout<<"Please enter a positive number !";
    }
    else{
        while(num>0){
            product *= num%10;
            num/=10;
        }
        cout<<"Product of digits is: "<<product;
    }
    
    return 0;
}
