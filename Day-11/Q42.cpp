//WAP to Write function to find maximum.

#include <iostream>
using namespace std;

int max(int num1, int num2){
    return (num1 > num2) ? num1 : num2;
}
int main(){
    int num1, num2;
    cout<<"Enter the numbers: ";
    cin>>num1>>num2;

    if(num1==num2){
        cout<<"The numbers are equal";
        return 0;
    }
    cout<<max(num1, num2)<<" is greater.";
    return 0;
}