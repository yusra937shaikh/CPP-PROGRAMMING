//write a c++ program to read two integers M and N & SWAP their values.
#include<iostream>
using namespace std;
class swapping
{
	public:
	void getdata()
	{
      int M,N;
      cout<<"ENTER THE VALUE OF M: ";
      cin>>M;
      cout<<"ENTER THE VALUE OF N: ";
      cin>>N;
      cout<<endl<<"BEFORE SWAPPING M = "<<M<<" N = "<<N<<endl;

      int SWAP=M;
      M=N;
      N=SWAP;

      cout<<endl<<"AFTER SWAPPING M = "<<M<<" N = "<<N<<endl;
    }
};
int main()
{
	swapping s;
	s.getdata();
}
