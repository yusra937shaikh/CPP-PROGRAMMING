#include <iostream>
using namespace std;

class Table 
{
        public:
        void printTable(int num) // Member function to print the table
        {
            for (int i = 1; i <= 10; i++) 
            {
                cout << num << " * " << i << " = " << num * i << endl;
            }
        }
};

int main() 
{
    int num;
    cout << "Enter a number: ";// Taking input from the user
    cin >> num;
    Table t;// Creating an object of the class Table
    t.printTable(num);// Calling the member function to print the multiplication table
    
    return 0;
}
