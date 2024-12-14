#include<iostream>
using namespace std;
class myclass
{
  char ch;
  public:
  void vowel_consonent()
  {
    cout<<endl<<"ENTER THE CHARACTER:";
    cin>>ch;
    if(ch=='A' || ch=='a' || ch=='E'|| ch=='e' || ch=='I' ||ch=='i' || ch=='O' ||ch=='o' || ch=='U' ||ch=='u')
    {
      cout<<"CHARACTER IS VOWEL";
    }
    else
    {
      cout<<"CHARACTER IS CONSONENT";
    }
  }
};
int main()
{
  myclass a;
  a.vowel_consonent();
}
