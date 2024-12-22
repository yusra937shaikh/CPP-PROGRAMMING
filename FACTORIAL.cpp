#include<iostream>
using namespace std;
class fac
{
    public:
    void myFunc()
    {
    int start, end;
    float fact;
    cout<<endl<<"Enter the start of the range: ";
    cin>>start;
    cout<<endl<<"Enter the end of the range: ";
    cin>>end;
    
    cout<<endl<<"Factorials from "<< start<<" TO "<< end <<" IS:";
    for (int i = start; i <= end; i++)
    {
        fact = 1; 
        for (int j = 1; j <= i; j++) 
        {
            fact *= j;  // Multiply each integer from 1 to i
        }
        cout<<endl<<"Factorial of "<< i << "IS:"<< fact;
    }

    }
};
int main()
{
    fac m;
    m.myFunc();
}
