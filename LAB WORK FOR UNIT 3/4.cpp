//write a c++ program to check the number is prime or not.
#include<iostream>
using namespace std;
class primechecker
{
	public:
	void getdata()
	{
	  int num,i,isPrime = 1;
	  cout<<"ENTER A NUMBER : ";
	  cin>>num;

	  if(num<=1)
	  {
	  	isPrime = 0;//num is <=1 is not prime num
	  }
	  else
	  {
	  	for(i=2;i<num;i++)
	  	{
	  		if(num%i==0)
	  		{
	  			isPrime = 0;//reminder 0 is not prime num
	  			break;
	  		}//if over
	  	}//for loop over
	  }//else over

	  if(isPrime)
	  {
	  	cout<<endl<<num<<" IS PRIME NUMBER";
	  }
	  else
	  {
	  	cout<<endl<<num<<" IS NOT PRIME NUMBER";
	  }
	}
};
int main()
{
	primechecker p;
	p.getdata();
}
