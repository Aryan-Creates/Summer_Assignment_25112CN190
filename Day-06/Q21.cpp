//WAP to convert decimal number to binary number.

#include <iostream>
using namespace std;

int main(){
    int decimal, binary=0, rem, place=1;

    cout<<"Enter a decimal number: ";
    cin>>decimal;

    while(decimal>0){
        rem = decimal%2;
        binary = binary + rem*place;
        decimal/=2;
        place*=10;
    }
    
    cout<<"Binary number: "<<binary;
    return 0;
}