//WAP to Recursive Fibonacci.
//indexing starts from 1 i.e. 0(1),1(2),1(3),2(4),3(5),5(6),8(7),13(8),21(9),34(10),55(11),89(12),144(13)....

#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int n;
    cout<<"Enter a positive number: ";
    cin>>n;

    if(n<=0){
        cout<<"Error: Enter a positive number.";
        return 0;
    }
    cout<<"The "<<n<<"th term of Fibonacci series is "<<fibonacci(n);
    return 0;
}