#include <iostream>
using namespace std;

// Function to calculate subtraction of two matrices
void sub(int r, int c, int matrix1[][10], int matrix2[][10], int result[][10]) 
{
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

int main() 
{
    int r, c;

    // Input dimensions of the matrix
    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of columns: ";
    cin >> c;

    // Declare two matrices and a result matrix
    int matrix1[10][10], matrix2[10][10], result[10][10];

    // Input elements of the first matrix
    cout << "Enter elements of the first matrix:\n";
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            cin >> matrix1[i][j];
        }
    }

    // Input elements of the second matrix
    cout << "Enter elements of the second matrix:\n";
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            cin >> matrix2[i][j];
        }
    }

    // Call the sub function
    sub(r, c, matrix1, matrix2, result);

    // Print the result matrix
    cout << "The resulting matrix after subtraction is:\n";
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
