// WAP to Find nth Fibonacci term.

#include <iostream>
using namespace std;

int main(){
    int num, PrevNum = 0, CurrNum = 1, NextNum;

    cout<<"Enter the number of terms: ";
    cin>>num;

    // cout<<"Fibonacci Series: ";  //Reference to previous question

    for(int i=1; i<num; i++){
        // cout<<PrevNum<<" ";  //Reference to previous question
        NextNum = PrevNum + CurrNum;
        PrevNum = CurrNum;
        CurrNum = NextNum;
    }
    cout<<"The "<<num<<"th term of fibonacci series is: "<<PrevNum;  
    return 0;
}