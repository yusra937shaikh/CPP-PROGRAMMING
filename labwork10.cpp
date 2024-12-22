#include<iostream>
using namespace std;
class cal
{
	public:
	void myCalculator()
	{
	int ch,a,b,add,sub,mul;
	float div;
	
	cout<<endl<<"ENTER YOUR CHOICE (1 for add, 2 for sub, 3 for mul, 4 for div)";
	cin>>ch;
	cout<<endl<<"ENTER THE VALUE OF FIRST INTEGER VALUE:";
	cin>>a;
	cout<<endl<<"ENTER THE VALUE OF SECOND INTEGER VALUE:";
	cin>>b;

	switch(ch)
	   {
       case 1:
       add=a+b;
       cout<<endl<<"ADDITION IS:"<<add;
       break;

       case 2:
       sub=a-b;
       cout<<endl<<"SUBTRACTION IS:"<<sub;
       break;

       case 3:
       mul=a*b;
       cout<<endl<<"MULTIPLICATION IS:"<<mul;
       break;

       case 4:
       div=a/b;
       cout<<endl<<"DIVISION IS:"<<div;
       break;

       default:
       cout<<endl<<"INVALID CHOICE . PLEASE TRY AGAIN!:";
	   }

    }
};
int main()
{
	cal x;
	x.myCalculator();
}
