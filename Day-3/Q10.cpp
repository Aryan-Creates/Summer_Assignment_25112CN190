// WAP to print prime numbers in a range.

#include <iostream>
using namespace std;

int main(){
    int start, end, i, j;
    bool isPrime = true;

    cout<<"Enter starting number: ";
    cin>>start;
    cout<<"Enter ending number: ";
    cin>>end;

    for(i=start; i<=end; i++){
        if(i<2){
            continue;
        }

        isPrime = true;

        for(j=2; j*j<=i; j++){
            if(i%j==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout<<i<<"  ";
        }
    }

    return 0;
}