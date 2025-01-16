/*Write a program to create a menu driven program to perform operation on square matrix
1. Enter matrix elements
2. Print matrix elements
3. Print Upper Triangular matrix
4. Print Lower Triangular matrix
5. Diagonal Matrix*/
#include<iostream>
using namespace std;
class abc
{
   public:
    int a[3][3];
    void getdata()
    {
        cout<<endl<<"ENTER THE METRIX ELEMENT: ";
        for(int i=0;i<=2;i++)
        {
            for(int j=0;j<=2;j++)
            {
                cin>>a[i][j];
            }
        }       
        cout<<endl;
    }
    void print()
    {
        cout<<endl<<"MATRIX IS : "<<endl;
        for(int i=0;i<=2;i++)
        {
            for(int j=0;j<=2;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void upper_triangular()
    {
        cout<<endl<<"UPPER TRIANGULAR MATRIX ELEMENTS ARE: ";
        for(int i=0;i<=2;i++)
        {
            for(int j=0;j<=2;j++)
            {
                if(i<j)
                {
                    cout<<a[i][j]<<" ";
                }    
            }
        }
        cout<<endl;
    }
    void lower_triangular()
    {
        cout<<endl<<"LOWER TRIANGULAR MATRIX ELEMENTS ARE: ";
        for(int i=0;i<=2;i++)
        {
            for(int j=0;j<=2;j++)
            {
                if(i>j)
                {
                    cout<<a[i][j]<<" ";
                } 
            }
        }
        cout<<endl;
    }
    void diognal()
    {
        int sum=0;
        cout<<endl<<"DIOGNAL MATRIX ARE: "<<endl;
        for(int i=0;i<=2;i++)
        {
            for(int j=0;j<=2;j++)
            {
                if(i==j)
                {
                    cout<<a[i][j]<<" ";
                    sum=sum+a[i][j];
                } 
            }
        }
        cout<<endl;
    }
};
int main()
{
    abc y;
    y.getdata();
    y.print();
    y.upper_triangular();
    y.lower_triangular();
    y.diognal();
}
