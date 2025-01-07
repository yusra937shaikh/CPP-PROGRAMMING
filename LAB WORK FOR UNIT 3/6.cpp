#include<iostream>
using namespace std;
class addition
{
	public:
	void getdata()
	{
      int num,sum = 0;
      cout<<"ENTER NUMBERS TO ADDITION (ENTER 0 TO GET ADDITION):"<<endl;

      while(true)
      {
      	cin>>num;
      	if(num == 0)
      	{
      		break;
      	}
      	sum += num;
      } 
      cout<<endl<<" SUM OF THE TOTAL NUMBER IS : "<<sum<<endl;
	}
};
int main()
{
	addition a;
	a.getdata();
}
