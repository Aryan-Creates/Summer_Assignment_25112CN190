//WAP to Generate Fibonacci series.

#include <iostream>
using namespace std;

int main(){
    int num, PrevNum = 0, CurrNum = 1, NextNum;

    cout<<"Enter the number of terms: ";
    cin>>num;

    cout<<"Fibonacci Series: ";

    for(int i=1; i<=num; i++){
        cout<<PrevNum<<" ";
        NextNum = PrevNum + CurrNum;
        PrevNum = CurrNum;
        CurrNum = NextNum;
    }
    return 0;
}