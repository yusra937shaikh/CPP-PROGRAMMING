//write a c++ program to find the area of circle
#include <iostream>
using namespace std;
class area
{
public:
  void data()
  {
    float r,aoc,pi=3.14;
    cout<<endl<<"ENTER THE VALUE OF REDIUS: ";
    cin>>r;
    aoc=pi*r*r;
    cout<<endl<<"AREA OF CIRCLE IS : "<<aoc;
  }
};
int main()
{
  area obj;
  obj.data();
}
