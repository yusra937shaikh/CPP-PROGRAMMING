#include<iostream>
using namespace std;
class fibonacci
{
   public:
   void cal()
   {
   int n,i,first=0,second=1,next;
	cout<<endl<<"ENTER THE NUMBER OF TERMS:";
	cin>>n;
	cout<<"fibonacci series is :";

	for(i=0;i<n;i++)
	{
	  if(i<=1)
	  {
	    next=i;
	  }
	  else
	  {
	    next=first+second;
	    first=second;
	    second=next;
	  }
	  cout<<endl<<next;
	}
	return 0;
   } 
};
int main()
{
   fibonacci y;
   y.cal();	
}
