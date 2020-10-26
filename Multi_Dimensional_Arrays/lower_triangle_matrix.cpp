#include <iostream>

using namespace std;

int main(){
    int row, col;
    cout << "Enter number of rows and columns : ";
    cin >> row >> col;
    int matrix[row][col];

    cout << "Enter elements of matrix : " << endl;

    for (register int i = 0; i < row; i++)
    {
        for (register int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
        
    }

    int addition = 0;

    for (register int i = 0; i < col; i++)
    {
        for (register int j = i; j < row; j++)
        {
            addition += matrix[j][i];
        }
        
    }

    cout << addition << endl;
    
    return 0;
}