// WAP to find factorial of a number.

#include<iostream>
using namespace std;

int main(){
    int n, fact=1;
    cout<<"Enter a Number: ";
    cin>>n;
    if(n==1 || n==0){
        cout<<"Factorial of "<<n<<" is : 1"<<endl;
    }
    else{
        for(int i=1; i<=n; i++){
            fact *= i;
        }
        cout<<"Factorial of "<<n<<" is : "<<fact<<endl;
    }
    return 0;
}