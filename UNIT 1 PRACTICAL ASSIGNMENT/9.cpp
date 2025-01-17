//write a c++ program to find the area of rectangle
#include <iostream>
using namespace std;
class area
{
public:
  void data()
  {
    float l,w,aor;
    cout<<endl<<"ENTER THE VALUE OF LENGTH: ";
    cin>>l;
    cout<<endl<<"ENTER THE VALUE OF WIDTH: ";
    cin>>w;
    aor=l*w;
    cout<<endl<<"AREA OF RECTANGLE IS : "<<aor;
  }
};
int main()
{
  area obj;
  obj.data();
}
