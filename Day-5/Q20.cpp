//WAP to find largest prime number in a given range.

#include <iostream>
using namespace std;

int main(){
    int start, end, largestPrime = -1;
    
    cout<<"Enter the starting and ending range: ";
    cin>>start>>end;
    
    if(start > end){
        int temp = start;
        start = end;
        end = temp;
    }
    
    for(int i=start; i<=end; i++){
        bool isPrime = true;
        
        if(i<2){
            continue; // Skip numbers less than 2
        }
        
        for(int j=2; j*j<=i; j++){
            if(i%j==0){
                isPrime = false;
                break;
            }
        }
        
        if(isPrime){
            largestPrime = i;
        }
    }
    
    if(largestPrime != -1){
        cout<<"The largest prime number in the range is: "<<largestPrime<<endl;
    } else {
        cout<<"No prime numbers found in the given range."<<endl;
    }
    return 0;
}
