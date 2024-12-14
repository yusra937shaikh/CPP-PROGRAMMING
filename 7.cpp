#include<iostream>
using namespace std;
class myclass
{
  int a,b,c;
  public:
  void swap()
  {
    cout<<endl<<"ENTER THE VALUE OF A:";
    cin>>a;
    cout<<endl<<"ENTER THE VALUE OF B:";
    cin>>b;
    cout<<endl<<"BEFORE SWAPPING:"<<endl<<"            A IS:"<<a<<endl<<"            AND B IS:"<<b;
    c=a;
    a=b;
    b=c;
    cout<<endl<<"AFTER SWAPPING:"<<endl<<"            A IS:"<<a<<endl<<"            AND B IS:"<<b;
  }
};
int main()
{
  myclass a;
  a.swap();
}
