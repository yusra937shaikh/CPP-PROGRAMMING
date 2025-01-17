//write a c++ program to find the factorial of the number
#include<iostream>
using namespace std;
class fac
{
    public:
    void myFunc()
    {
    int n;
    float fact;
    cout<<endl<<"Enter the number: ";
    cin>>n;
    
    cout<<endl<<"Factorial is: ";
    for (int i = 0; i <= n; i++)
    {
        fact = 1; 
        for (int j = 1; j <= i; j++) 
        {
            fact *= j;  // Multiply each integer from 1 to i
        }
        cout<<endl<<"Factorial of "<< i << " IS:"<< fact;
    }

    }
};
int main()
{
    fac m;
    m.myFunc();
}
