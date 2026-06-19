//WAP to multiply matrices.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int row1, col1, row2, col2;
    cout<<"Enter rows and columns of matrix 1: ";
    cin>>row1>>col1;
    cout<<"Enter rows and columns of matrix 2: ";
    cin>>row2>>col2;
    
    if(row1 != col2){
        cout<<"Multiplication not possible.";
        return 0;
    }

    vector<vector<int>> matrix1(row1, vector<int>(col1));
    vector<vector<int>> matrix2(row2, vector<int>(col2));
    vector<vector<int>> result(row1, vector<int>(col2, 0));

    cout<<"Enter elements of first matrix"<<endl;
    for(int i = 0; i < row1; i++){
        for(int j = 0; j < col1; j++){
            cout<<"Enter element "<<"["<<i<<"]"<<"["<<j<<"] : ";
            cin>>matrix1[i][j];
        }
    }
    cout<<"Enter elements of second matrix"<<endl;
    for(int i = 0; i < row2; i++){
        for(int j = 0; j < col2; j++){
            cout<<"Enter element "<<"["<<i<<"]"<<"["<<j<<"] : ";
            cin>>matrix2[i][j];
        }
    }
    for(int i = 0; i < row1; i++){
        for(int j = 0; j < col2; j++){
            for(int k = 0; k < col1; k++){
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    cout<<"Resultant matrix"<<endl;
    for(int i = 0; i < row1; i++){
        for(int j = 0; j < col1; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}