// WAP to Write function to check prime.

#include <iostream>
using namespace std;

bool prime(int num){
    if(num<=1){
        return false;
    }
    for(int i=2; i*i<=num; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    
    if(prime(num)){
        cout<<num<<" is a prime number.";
    }
    else{
        cout<<num<<" is not a prime number.";
    }
    return 0;
}