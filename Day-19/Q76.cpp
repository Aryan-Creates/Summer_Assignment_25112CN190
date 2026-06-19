//WAP to find diagonals sum of matrix.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int rows, cols, sum = 0;
    cout<<"Enter rows: ";
    cin>>rows;
    cout<<"Enter columns: ";
    cin>>cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));
    
    cout<<"Enter elements of matrix"<<endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout<<"Enter element "<<"["<<i<<"]"<<"["<<j<<"]"<<": ";
            cin>>matrix[i][j];
        }
    }
    cout<<"Entered matrix"<<endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i = 0; i < rows; i++){
        sum += matrix[i][i];
    }
    cout<<"Sum of diagonal elements: "<<sum;
    return 0;
}