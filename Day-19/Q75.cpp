//WAP to find transpose matrix.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int rows, cols;
    cout<<"Enter rows: ";
    cin>>rows;
    cout<<"Enter columns: ";
    cin>>cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));
    vector<vector<int>> transpose(cols, vector<int>(rows));
    
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
        for(int j = 0; j < cols; j++){
            transpose[j][i] = matrix[i][j];
        }
    }
    
    cout<<"Transpose matrix"<<endl;
    for(int i = 0; i < cols; i++){
        for(int j = 0; j < rows; j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}