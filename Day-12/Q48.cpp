//WAP to Write function for perfect number.

#include <iostream>
using namespace std;

bool perf(int num){
    int result=0;
    if(num <= 0)
    return false;
    for(int i=1; i<=num/2; i++){
        if(num%i==0)
        result+=i;
    }
    if(result==num)
    return true;
    else
    return false;
}
int main(){
    int num; 
    cout<<"Enter number: ";
    cin>>num;
    if(perf(num))
    cout<<num<<" is a perfect number.";
    else
    cout<<num<<" is not a perfect number.";
    return 0;
}