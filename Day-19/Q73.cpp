//WAP to Add matrices. 

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int rows, cols;
    cout<<"Enter rows: ";
    cin>>rows;
    cout<<"Enter columns: ";
    cin>>cols;

    vector<vector<int>> matrix1(rows, vector<int>(cols));
    vector<vector<int>> matrix2(rows, vector<int>(cols));
    vector<vector<int>> sum(rows, vector<int>(cols));

    cout<<"Enter elements of matrix 1"<<endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout<<"Enter element "<<"["<<i<<"]"<<"["<<j<<"]"<<": ";
            cin>>matrix1[i][j];
        }
    }

    cout<<"Enter elements of matrix 2"<<endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout<<"Enter element "<<"["<<i<<"]"<<"["<<j<<"]"<<": ";
            cin>>matrix2[i][j];
        }
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    cout<<"\nSum of matrices"<<endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}