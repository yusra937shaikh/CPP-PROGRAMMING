//C++ program that creates a 2D array, passes it to a function diagonal, and displays all the diagonal elements and their sum if the matrix is a square matrix.
#include <iostream>
using namespace std;
// Function to display diagonal elements and their sum
void diagonal(int matrix[][10], int rows, int cols) 
{
    if (rows != cols) 
    {
        cout<<endl<< "The matrix is not a square matrix. Diagonal elements cannot be calculated." << endl;
        return;
    }
    int sum = 0;
    cout<<endl<< "Diagonal elements are: ";
    for (int i = 0; i < rows; i++) 
    {
        cout<<endl<< matrix[i][i] << " ";
        sum += matrix[i][i];
    }
    cout<<endl<< "\nSum of diagonal elements: " << sum << endl;
}

int main() 
{
    int rows, cols;
    // Input dimensions of the matrix
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix[10][10];// Declare a 2D array
    cout << "Enter elements of the matrix:\n";// Input elements of the matrix
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cin >> matrix[i][j];
        }
    }
    cout << "Matrix are:\n";// Input elements of the matrix
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    diagonal(matrix, rows, cols); // Call the diagonal function
    return 0;
}
