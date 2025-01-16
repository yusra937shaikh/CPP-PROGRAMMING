//write a c++ program to create an array of 10 elements and pass it to the function sort(ascending order). sort function will sort the array and display it in sorted order.
#include <iostream>
using namespace std;
// Function to sort the array in ascending order
void sort(int arr[], int size) //function with argument
{
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = 0; j < size - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Array in sorted order: ";// Display the sorted array
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() //main function
{
    int arr[10];
    cout << "Enter 10 elements for the array:\n";// Input 10 elements from the user
    for (int i = 0; i < 10; i++) 
    {
        cin >> arr[i];
    }
    sort(arr, 10);// Call the sort function
    return 0;
}
