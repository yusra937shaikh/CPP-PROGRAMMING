//write a c++ program to check the number is even or odd.number must be taken from user
#include<iostream>
using namespace std;
class even_odd
{
  public:
  int a;
  void getvalue()
  {
  cout<<endl<<"ENTER THE VALUE OF A:";
  cin>>a;
  }
  void checker()
  {
    if(a%2==0)
    {
      cout<<endl<<"THE NUMBER IS EVEN";
    }
    else
    {
      cout<<endl<<"THE NUMBER IS ODD"; 
    }
  }
 
};
int main()
{
  even_odd d;
  d.getvalue();
  d.checker();
}
