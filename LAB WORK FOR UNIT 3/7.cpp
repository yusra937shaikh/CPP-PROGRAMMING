//write a c++ program to display integer from 1 to 10 except 6 and 9.
#include<iostream>
using namespace std;
class data1
{
	public:
	void getdata()
	{
      cout<<"NUMBERS FROM 1 TO 10(EXCLUDING 6 AND 9):"<<endl;
      for(int i=1;i<=10;i++)
      {
      	if(i==6 || i==9)
      		{
      			continue;
      		}
      		cout<<i<<" ";
      		cout<<endl;
      }
	}
};
int main()
{
	data1 d;
	d.getdata();
}
