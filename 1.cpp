#include<iostream>
using namespace std;
class myclass
{
   int a,b;
   public:
   void getvalues()
   {
     cout<<"ENTER THE VALUE OF A:";
     cin>>a;
     cout<<"ENTER THE VALUE OF B:";
     cin>>b;
   }
   void add()
   {
     cout<<endl<<"ADDITION IS:"<<a+b;
   }
   void sub()
   {
     cout<<endl<<"SUBTRACTION IS:"<<a-b;
   }
   void mul()
   {
     cout<<endl<<"MULTIPLICATION IS:"<<a*b;
   }
   void div()
   {
     cout<<endl<<"DIVISION IS:"<<a/b;
   }
};

int main()
{
  myclass y;
  y.getvalues();
  y.add();
  y.sub();
  y.mul();
  y.div();
}
