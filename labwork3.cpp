#include<iostream>
using namespace std;
class cel_far
{
   int f;
   float c;	
   public:
   	void func()
   	{
       cout<<endl<<"ENTER THE VALUE OF F:";
       cin>>f;
       c=((f-32)*5)/9;
       cout<<endl<<"CELCIUS:"<<c;
   	}
     
};
int main()
{
   cel_far x;
   x.func();	
}
