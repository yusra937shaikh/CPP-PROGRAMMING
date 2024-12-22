#include<iostream>
using namespace std;
class factorial
{
 	public:
 	void fctrl()
 	{
 	   int i,n,fac=1;
 	   cout<<endl<<"ENTER THE NUMBER:";
 	   cin>>n;
 	   for(i=n;i>=1;i--)
 	   {
 	     fac*=i;
 	   }
 	   cout<<endl<<"FACTORIAL OF "<<n<<" IS:"<<fac;
 	}
};
int main()
{
	factorial y;
	y.fctrl();
	return 0;
}
