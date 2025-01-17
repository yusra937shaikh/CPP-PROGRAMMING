//Write a c++ program to take a number from user and check that given number is prime or not.
#include <iostream>
using namespace std;
class primeChecker
{
public:
    void getdata()
    {
       int num,i,isprime=1;
       cout<<"enter the number: ";
       cin>>num;

       if(num<=1)
       {
        isprime=0;
       }
       else
       {
        for(i=2;i<num;i++)
         {
            if(num%i==0)
            {
                isprime=0;
                break;
            }
         }
       }
      if(isprime)
      {
        cout<<endl<<num<<" is prime number.";
      }
      else
      {
        cout<<endl<<num<<" is not prime number.";
      }
    }
};

int main()
{
    primeChecker obj;
    obj.getdata();
}
