// WAP to find GCD of two numbers.

#include <iostream>
using namespace std;

int main(){
    int num1, num2, gcd, i;
    cout<<"Enter two numbers: "<<endl;
    cin>>num1>>num2;

    for(i=1; i<=num1 && i<=num2; i++){
        if(num1%i==0 && num2%i==0){
            gcd=i;
        }
    }
    cout<<"GCD of "<<num1<<" and "<<num2<<" is: "<<gcd;
    return 0;
}