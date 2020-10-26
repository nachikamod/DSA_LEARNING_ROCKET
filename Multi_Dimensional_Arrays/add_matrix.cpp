#include <iostream>

using namespace std;

int main() {
    int row, col;
    cout << "Enter row and column : ";
    cin >> row >> col;
    int matrix_1[row][col], matrix_2[row][col];

    cout << "Matrix 1 : " << endl;
    for (register int i = 0; i < row; i++)
    {
        for (register int j = 0; j < col; j++)
        {
            cin >> matrix_1[i][j];
        }
        
    }

    cout << "Matrix 2 : " << endl;
    for (register int i = 0; i < row; i++)
    {
        for (register int j = 0; j < col; j++)
        {
            cin >> matrix_2[i][j];
        }
        
    }

    cout << "Addition : " << endl;
    for (register int i = 0; i < row; i++)
    {
        for (register int j = 0; j < col; j++)
        {
            cout << matrix_1[i][j] + matrix_2[i][j]<< " ";
        }

        cout << endl;
        
    }
    
    return 0;
}