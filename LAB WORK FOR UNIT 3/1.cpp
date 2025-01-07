//WRITE A PROGRAM TO FIND THE LARGEST OF THREE NUMBERS USING CONDITIONAL OPERATOR.
#include<iostream>
using namespace std;
class large
{
	public:
	void getdata()
	{
	  int a,b,c;
      cout<<"ENTER THE VALUE OF A:";
      cin>>a;
      cout<<"ENTER THE VALUE OF B:";
      cin>>b;
      cout<<"ENTER THE VALUE OF C:";
      cin>>c;
      cout<<endl<<"A = "<<a<<" , B = "<<b<<" , C = "<<c<<endl;

      if(a>b && a>c)
      {
        cout<<endl<<"A = "<<a<<" IS GREATER";
      }
      if(b>a && b>c)
      {
        cout<<endl<<"B = "<<b<<" IS GREATER";
      }
      if(c>a && c>b)
      {
        cout<<endl<<"C = "<<c<<" IS GREATER";
      }
	}
};
int main()
{
	large l;
	l.getdata();
}
