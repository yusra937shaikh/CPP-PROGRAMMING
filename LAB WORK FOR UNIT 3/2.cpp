//WRITE A C++ PROGRAM TO REVERSE A NUMBER
#include<iostream>
using namespace std;
class reversed
{
	public:
	void getdata()
	{
	   int num,reversed_num=0,reminder;

	   cout<<"ENTER AN INTEGER: ";
	   cin>>num;

	   while(num!=0)
	   {
	   	reminder = num % 10;
	   	reversed_num = reversed_num * 10 + reminder;
	   	num /= 10;
	   }
       cout<<endl<<"REVERSED NUMBER IS : "<<reversed_num;
	}
};
int main()
{
	reversed r;
	r.getdata();
}
