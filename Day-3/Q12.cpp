//WAP to Find LCM of two numbers

#include <iostream>
using namespace std;

int main(){
    int num1, num2, gcd, i, lcm;
    cout<<"Enter two numbers: "<<endl;
    cin>>num1>>num2;

    for(i=1; i<=num1 && i<=num2; i++){
        if(num1%i==0 && num2%i==0){
            gcd=i;
        }
    }

    // cout<<"GCD of "<<num1<<" and "<<num2<<" is: "<<gcd;     
    //reference from previous question
    
    lcm=(num1*num2)/gcd;        //Formula to calculate LCM using GCD
    
    cout<<"LCM of "<<num1<<" and "<<num2<<" is: "<<lcm;
    return 0;
}