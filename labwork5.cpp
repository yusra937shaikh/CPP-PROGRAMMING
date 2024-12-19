#include <iostream>
#include <string>
using namespace std;

class SimpleString
 {
    public:
    string str;  //str is the variable for taking a string from user

    void inputString() 
    {
        cout << "Enter a string: "; // Take the full line as input
        getline(cin, str);  
    }

    void displayString()  // Function to display the string 
    {
        cout << "You entered: " << str << endl;
    }
};

int main() {
    SimpleString y;  

    y.inputString();  // Call function to input string
    y.displayString();  // Call function to display string

    return 0;
}
