// WAP to check strong number.

#include <iostream>
using namespace std;

int main(){
    int ognum, num, rem, sum=0, fact;

    cout<<"Enter a number: ";
    cin>>ognum;
    
    if(ognum<0){
        cout<<"Negative numbers cannot be strong numbers.";
    }
    else if(ognum==0){
        cout<<"0 is not a strong number.";
    }
    else{
        num=ognum;
        
        while(num>0){
            
            rem = num%10;
            num = num/10;
            fact = 1;
            
            for(int i=1; i<=rem; i++){
                fact = fact*i;
            }
            sum = sum + fact;
        }

        if(sum==ognum){
            cout<<ognum<<" is a strong number.";
        }
        else{
            cout<<ognum<<" is not a strong number. ";
        }
    }
    return 0;
}