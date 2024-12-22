#include<iostream>
using namespace std;
class maximum
{
	public:
	void func()
	{
       int a,b;
       cout<<endl<<"ENTER THE VALUE OF A:";
       cin>>a;
       cout<<endl<<"ENTER THE VALUE OF B:";
       cin>>b;
       if(a>b)
       {
         cout<<endl<<"A IS GREATER";
       }
       else
       {
         cout<<endl<<"B IS GREATER";
       }
	}
};
int main()
{
	maximum s;
	s.func();
}
