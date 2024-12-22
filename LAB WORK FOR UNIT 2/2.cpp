#include <iostream>
using namespace std;
class Pattern
{
    public:
    void printPattern() 
    {
        for (int i = 0; i < 5; i++) 
        {
            for (int j = 0; j <= i; j++) 
            {
                cout << char(65 + i) << " "; 
            }
            cout << endl; 
        }
    }
};

int main() {
    Pattern p;
    p.printPattern();
    return 0;
}
