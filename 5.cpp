//write a c++ program to calculate area of circle and parameter of the circle .enter the value from user.
#include<iostream>
using namespace std;
class calculation
{
  public:
  int r;
  void entervalue()
  {
    cout<<"ENTER THE RADIUS OF CIRCLE:";
    cin>>r;
  }
  void aoc()
  {
    cout<<endl<<"AREA OF CIRCLE IS:"<<3.14*r*r;
  }
  void pm()
  {
     cout<<endl<<"APARAMETER OF CIRCLE IS:"<<2*3.14*r;
  }
};
int main()
{
  calculation d;
  d.entervalue();
  d.aoc();
  d.pm();
}
