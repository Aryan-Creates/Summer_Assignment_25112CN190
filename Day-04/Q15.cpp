// WAP to Check Armstrong number.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num, ognum, digit=0, rem, sum=0;
    
    cout<<"Enter a number: ";
    cin>>ognum;
    num = ognum;

    while(num>0){
        digit++;
        num = num/10;
    }

    num = ognum;
    while(num>0){
        rem = num%10;
        sum = sum + (int)round(pow(rem, digit));
        num = num/10;
    }

    if(sum == ognum){
        cout<<ognum<<" is an Armstrong number. ";
    }
    else{
        cout<<ognum<<" is not an Armstrong number. ";
    }
    return 0;
}