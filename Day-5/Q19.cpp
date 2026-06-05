//WAP to print factors of a number.

#include <iostream>
using namespace std;

int main(){
    int num;
    
    cout<<"Enter a number: ";
    cin>>num;
    
    if(num<0 || num==0){
        cout<<"Please enter a positive integer !";
    }
    
    else{
        cout<<"Factors of "<<num<<" are : ";
        for(int i=1; i<=num; i++){
            if(num%i==0){
                cout<<i<<"  ";
                }
            }
    }
    return 0;
}