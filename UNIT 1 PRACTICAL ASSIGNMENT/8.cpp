//write a c++ program to create fibonacci series and number of terms is teken from user.
#include<iostream>
using namespace std;
class fibonacci
{
        public:
        void getdata()
        {
      int num,i,first=0,second=1,next;
      cout<<endl<<"ENTER THE NUMBER OF TERMS : ";
      cin>>num;
      cout<<endl<<"FIBONACCI SERIES IS : ";

      for(i=0;i<num;i++)
      {
              if(i<=1)
              {
                      next=i;
              }
              else
              {
                      next=first +second;
                      first =second;
                      second=next;
              }
              cout<<next<<" ";
      }

        }
};
int main()
{
        fibonacci f;
        f.getdata();
}
