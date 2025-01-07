//write a c++ program to print first 10 natural numbers.
#include<iostream>
using namespace std;
class data1
{
	public:
	void getdata()
	{
     cout<<endl<<"THE FIRST 10 NATURAL NUMBERS ARE : ";
     for(int i=1;i<=10;i++)
     {
     	cout<<i<<" ";
     }
     cout<<endl;
	}
};
int main()
{
	data1 d;
	d.getdata();
}
