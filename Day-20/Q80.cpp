//WAP to find column wise sum of a matrix.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "Enter matrix elements:"<<endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    
    cout << "Entered Matrix:"<<endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "column-wise Sum:"<<endl;
    for(int j = 0; j < cols; j++){
        int sum = 0;
        for(int i = 0; i < rows; i++){
            sum += matrix[i][j];
        }
        cout << "Sum of Row " << j + 1 << " = " << sum << endl;
    }
    return 0;
}