//WAP to Write function for Armstrong.

#include <iostream>
#include <cmath>
using namespace std;

bool armstrong(int num){
    int result = 0;
    int n = num;
    int digits = 0;

    while(n>0){
        digits++;
        n/=10;
    }
    n = num;
    while(n>0){
        result += (int)round(pow(n%10, digits));
        n/=10;
    }
    if(num == result)
    return true;
    else
    return false;
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(armstrong(num))
    cout<<num<<" is an armstrong number.";
    else
    cout<<num<<" is not an armstrong number.";
    return  0;
}