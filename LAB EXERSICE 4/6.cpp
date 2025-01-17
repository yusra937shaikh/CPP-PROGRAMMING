/*Write a program to declare an array of 5 elements and pass it to the function copy and positive.
Copy function will copy all the array elements into new array and positive function will find all the 
positive values from the array.*/
#include <iostream>
using namespace std;
void copyArray(int original[], int copied[], int size) // Function to copy array elements
{
    for (int i = 0; i < size; i++) 
    {
        copied[i] = original[i];
    }
}

void findPositive(int array[], int size) // Function to find and display positive values
{
    cout << "Positive values in the array: ";
    for (int i = 0; i < size; i++) 
    {
        if (array[i] > 0) 
        {
            cout << array[i] << " ";
        }
    }
    cout << endl;
}

int main() 
{
    const int size = 5;
    int original[size], copied[size];

    // Input array elements
    cout << "Enter 5 elements for the array: ";
    for (int i = 0; i < size; i++) 
    {
        cin >> original[i];
    }

    copyArray(original, copied, size);// Copy array elements

    cout << "Copied array: ";// Display the copied array

    for (int i = 0; i < size; i++) 
    {
        cout << copied[i] << " ";
    }
    cout << endl;

    findPositive(original,size);// Find and display positive values
 
    return 0;
}
