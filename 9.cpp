#include<iostream>
using namespace std;
class cal
{
  int a,b,c;
  public:
  void func()
  {
  	cout<<endl<<"ENTER THE VALUE OF A:";
  	cin>>a;
  	cout<<endl<<"ENTER THE VALUE OF B:";
  	cin>>b;
  	c=a&b;
  	cout<<endl<<"BITWISE AND IS:"<<c;
  	c=a|b;
  	cout<<endl<<"BITWISE OR IS:"<<c;
  	c=a^b;
  	cout<<endl<<"BITWISE XOR IS:"<<c;
  } 
};
int main()
{
   	cal d;
   	d.func();
}
