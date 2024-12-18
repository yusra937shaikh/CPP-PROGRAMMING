//write a cpp program to take a 2 variables from user and swap that 2 values without taking third variable.
#include<iostream>
using namespace std;
class swp
{
   public:
   	int a,b;
   	void cal()
   	{
   		cout<<endl<<"ENTER THE VALUE OF A:";
   		cin>>a;
   		cout<<endl<<"ENTER THE VALUE OF B:";
   		cin>>b;
   		cout<<endl<<"BEFORE SWAPPING A IS:"<<a<<" AND B IS:"<<b;
   		a=a+b;
   		b=a-b;
   		a=a-b;
   		cout<<endl<<"AFTER SWAPPING A IS:"<<a<<" AND B IS:"<<b;
   	}
};
int main()
{
	swp c;
	c.cal();
}
