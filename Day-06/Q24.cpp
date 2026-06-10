//WAP to Find x^n without pow().

#include <iostream>
using namespace std;

int main(){
    int x, n, result=1;
    
    cout<<"Enter x and n: ";
    cin>>x>>n;
    
    for(int i=1; i<=n; i++){
        result *= x;
    }
    
    cout<<x<<"^"<<n<<" = "<<result;
    return 0;
}