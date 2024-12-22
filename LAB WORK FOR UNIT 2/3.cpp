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
};
int main()
{
  calculation d;
  d.entervalue();
  d.aoc();
  return 0;
}
