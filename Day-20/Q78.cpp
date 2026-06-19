// WAP to Check symmetric matrix.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter order of square matrix: ";
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));

    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    bool symmetric = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                symmetric = false;
                break;
            }
        }
        if (!symmetric)
        {
            break;
        }
    }
    if (symmetric)
    {
        cout << "Matrix is Symmetric.";
    }
    else
    {
        cout << "Matrix is Not Symmetric.";
    }
    return 0;
}