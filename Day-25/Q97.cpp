//WAP to merge and sort array.

#include <iostream>
using namespace std;

int main(){
    int a[] = {1, 3, 5};
    int b[] = {2, 4, 6};

    int n1 = 3, n2 = 3;
    int c[6];

    int i = 0, j = 0, k = 0;

    while(i < n1 && j < n2){
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    while(i < n1)
        c[k++] = a[i++];

    while(j < n2)
        c[k++] = b[j++];

    cout<<"Merged Array: ";

    for(int x = 0; x < 6; x++)
        cout << c[x] << " ";
    return 0;
}