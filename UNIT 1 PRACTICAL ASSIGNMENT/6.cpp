#include <iostream>
#include <iomanip>  // For using setprecision() and width()
using namespace std;

class NumberFormatter 
{
    public:
    void printFormatted(double num)// Member function to print the number with different precisions
    {
        cout << fixed;  // Ensures output in fixed-point notation
        
        // Printing with specific precision
        cout << setprecision(9) << num << endl;  // 9 decimal places
        cout << setprecision(8) << num << endl;  // 8 decimal places
        cout << setprecision(7) << num << endl;  // 7 decimal places
        cout << setprecision(6) << num << endl;  // 6 decimal places
        cout << setprecision(5) << num << endl;  // 5 decimal places
        cout << setprecision(4) << num << endl;  // 4 decimal places
        cout << setprecision(3) << num << endl;  // 3 decimal places
        cout << setprecision(2) << num << endl;  // 2 decimal places
        cout << setprecision(1) << num << endl;  // 1 decimal place
    }
};

int main() 
{
    double num = 3.123456789;// Storing the number
    NumberFormatter formatter;// Creating an object of NumberFormatter class
    formatter.printFormatted(num);// Calling the member function to print the formatted number
    return 0;
}
