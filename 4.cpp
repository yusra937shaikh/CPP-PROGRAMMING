#include<iostream>
using namespace std;
class myclass
{
  int a,b;
  public:
  void printvalues()
  {
    cout<<"ENTER THE VALUE OF A:";
    cin>>a;
    cout<<"ENTER THE VALUE OF B:";
    cin>>b;
  }
  void sum()
  {
    cout<<endl<<"ADDITION IS:"<<a+b;
  }
  void sub();
};
void myclass::sub()
{
  cout<<endl<<"SUBTRACTION IS:"<<a-b;
}

int main()
{
  myclass d;
  d.printvalues();
  d.sum();
  d.sub();
}
/*yaha par aap scope operator:: ka use kark class k private variable ko bhi class k bahar use kar sakte ho.
JAISE YAHA MENE a or b ko private rakha h or mene sub function ko class k bahar operate kiya h fir bhi me class k private variables a or b ko bhi class k bahar sub function me use kar sakti hu.
iski vajah ye h k sub function h to class ka hi m,ember or class ka koi bhi member class k private member ko bhi use kar sakta h.
is liye yaha par mene sub function ko class k bahar scope operator ka use kark banaya h .or ha jo function hamne class k bahar banaya h usko main function me call karna zaruri h.*/
