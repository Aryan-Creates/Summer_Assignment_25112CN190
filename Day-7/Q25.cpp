//WAP to Recursive factorial.

#include <iostream>
using namespace std;

long long int factorial(int n){

    if(n==0 || n==1){
        return 1;
    }

    return n*factorial(n-1);
}

int main(){
    int n;

    cout<<"Enter a positive number: ";
    cin>>n;
    
    if(n<0){
        cout<<"Factorial is not defined for negative numbers.";
        return 0;
    }

    cout<<"The factorial of number "<<n<<" is "<<factorial(n);
    return 0;
}