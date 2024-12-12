#include<iostream>
using namespace std;
class myclass//inti of class name
{
   int a,b;//private member of the class
   public:
   void getvalues()//function of class 
   {
     cout<<"ENTER THE VALUE OF A:";//cout is use for print the statement
     cin>>a;//cin use for save the value of variables which has you declare
     cout<<"ENTER THE VALUE OF B:";
     cin>>b;
   }
   void add()//function of class
   {
     cout<<endl<<"ADDITION IS:"<<a+b;//endl keyword is use for nextline 
   }
   void sub()//function of class
   {
     cout<<endl<<"SUBTRACTION IS:"<<a-b;
   }
   void mul()//function of class
   {
     cout<<endl<<"MULTIPLICATION IS:"<<a*b;
   }
   void div()//function of class
   {
     cout<<endl<<"DIVISION IS:"<<a/b;
   }
};

int main()
{
  myclass y;//object intialisation
  y.getvalues();//called class function 
  y.add();
  y.sub();
  y.mul();
  y.div();
}
