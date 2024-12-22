#include <iostream>
using namespace std;
class Number
{
    public:
    int num;
    // Constructor to initialize the number
    Number(int number) //function with arg
    {
        num = number;
    }

    // Function to reverse the number
    int reverseNumber()// func with return a val
    {
        int reversed = 0;
        while (num != 0) 
        {
            int digit = num % 10;    // Get the last digit
            reversed = reversed * 10 + digit;  // Add the digit to reversed number
            num = num / 10;  // Remove the last digit from num
        }
        return reversed;
    }
};

int main() {
    int number;

    // enter the value from user for number
    cout << "Enter a number to reverse: ";
    cin >> number;

    // Create an object of class Number
    Number n(number);

    // Call the function to reverse the number and display the result
    int reversedNumber = n.reverseNumber();
    cout << "Reversed Number: " << reversedNumber << endl;

    return 0;
}
