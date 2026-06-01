// WAP to Print Armstrong numbers in a range.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int start, end, num, i, digit, rem, sum;
    
    cout<<"Enter the starting of range: ";
    cin>>start;
    cout<<"Enter the ending of range: ";
    cin>>end;

    for(i=start; i<=end; i++){
    num = i;
    digit=0;
    sum=0;

    while(num>0){
        digit++;
        num = num/10;
    }

    num = i;
    while(num>0){
        rem = num%10;
        sum = sum + (int)round(pow(rem, digit));
        num = num/10;
    }

    if(sum == i){
        cout<<i<<"  ";
    }

    // else{
    //cout<<ognum<<" is not an Armstrong number. ";   //Reference to previous code
    // }
    
    }
        return 0;
}