#include <iostream>

using namespace std;

void read(int[][10],int, int);
void multiply(int[][10], int[][10], int[][10], int, int, int);
void print(int[][10], int, int);

int main() {
    int matrix_1[10][10], matrix_2[10][10], matrix_3[10][10], row, col_1, col_2;
    cout << "Enter rows and columns in first matrix : ";
    cin >> row >> col_1;
    cout << "Enter columns in second matrix : ";
    cin >> col_2;

    cout << "Enter elements in first matrix : " << endl;
    read(matrix_1, row, col_1);

    cout << "Enter elements in second matrix : " << endl;
    read(matrix_2, col_1, col_2);

    multiply(matrix_1, matrix_2, matrix_3, row, col_1, col_2);
    
    cout << "Multiplication of matrix : " << endl;

    print(matrix_3, row, col_2);

    return 0;
}


void read(int matrix_1[][10], int row, int col_1) {
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col_1; j++)
        {
            cin >> matrix_1[i][j];
        }
        
    }
    
}

void multiply(int matrix_1[][10], int matrix_2[][10], int matrix_3[][10], int row, int col_1, int col_2) {

    int i, j, k;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col_2; j++)
        {
            matrix_3[i][j] = 0;
            for (k = 0; k < col_1; k++)
            {
                matrix_3[i][j] = matrix_3[i][j] + matrix_1[i][k] * matrix_2[k][j];
            }
            
        }
        
    }    

}

void print(int matrix_1[][10], int row, int col_1) {
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col_1; j++)
        {
            cout << matrix_1[i][j] << " ";
        }

        cout << endl;
        
    }
    
}

