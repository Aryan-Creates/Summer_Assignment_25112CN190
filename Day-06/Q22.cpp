// WAP to convert binary number to decimal number.

#include <iostream>
using namespace std;

int main(){
    int binary, decimal=0, base=1, rem;
    
    cout<<"Enter a binary number: ";
    cin>>binary;

    while(binary>0){
        rem = binary%10;
        decimal += (rem*base);
        binary/=10;
        base*=2;
    }
    
    cout<<"Decimal number: "<<decimal;
    return 0;
}