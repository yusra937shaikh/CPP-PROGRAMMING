/*Write a program to create two 2D matrix and pass it to the function . Function will multiply two 
matrices if the matrix multiplication condition is matched.*/
#include <iostream>
using namespace std;
void multiplyMatrices(int mat1[][10], int mat2[][10], int result[][10], int r1, int c1, int r2, int c2) // Function to multiply two matrices
{
    if (c1 != r2) 
    {
        cout << "Matrix multiplication condition not met (Columns of mat1 != Rows of mat2)." << endl;
        return;
    }

    for (int i = 0; i < r1; i++) // Initializing the result matrix to 0
    {
        for (int j = 0; j < c2; j++) 
        {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; i++) // Matrix multiplication
    {
        for (int j = 0; j < c2; j++) 
        {
            for (int k = 0; k < c1; k++) 
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << "Resultant matrix after multiplication:" << endl;// Display the result matrix
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

int main() 
{
    int mat1[10][10], mat2[10][10], result[10][10];
    int r1, c1, r2, c2;

    cout << "Enter rows and columns for the first matrix: ";// Input dimensions for the first matrix
    cin >> r1 >> c1;

    cout << "Enter rows and columns for the second matrix: ";// Input dimensions for the second matrix
    cin >> r2 >> c2;

    cout << "Enter elements of the first matrix:" << endl; // Input elements for the first matrix
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c1; j++) 
        {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter elements of the second matrix:" << endl; // Input elements for the second matrix
    for (int i = 0; i < r2; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            cin >> mat2[i][j];
        }
    }
    
    cout<<"MATRIX THAT YOU ARE ENTERED: ";
    cout<<endl<<"FIRST ARRAY ELEMENTS ARE: "<<endl;
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl<<"SECOND ARRAY ELEMENTS ARE: "<<endl;
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            cout << mat2[i][j] << " ";
        }
        cout << endl;
    }
    multiplyMatrices(mat1, mat2, result, r1, c1, r2, c2);// Call the function to multiply matrices

    return 0;
}
