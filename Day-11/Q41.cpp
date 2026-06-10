//WAP to Write function to find sum of two numbers.

#include <iostream>
using namespace std;

double sum(double num1, double num2){
    return num1 + num2;
}

int main(){
    double num1, num2;
    cout<<"Enter the numbers: ";
    cin>>num1>>num2;

    cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<sum(num1, num2);
    return 0;
}