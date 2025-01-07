//write a c++ program to check whether the num is palindrome or not.
#include<iostream>
using namespace std;
class palindrome
{
	public:
	void getdata()
	{
	  int num, original_num,reversed_num=0,reminder;

	   cout<<"ENTER AN INTEGER: ";//323 or 122
	   cin>>num;

       original_num = num;
	  
	   while(num!=0)
	   {
	   	reminder = num % 10;
	   	reversed_num = reversed_num * 10 + reminder;
	   	num /= 10;
	   }
       if(original_num == reversed_num)
       {
       	cout<<endl<<reversed_num<<" IS PALINDROME NUMBER.";//323 is palindrome number
       }
       else
       {
       	cout<<endl<<reversed_num<<" IS NOT PALINDROME NUMBER.";//122 is not palindrome number
       }
	}
};
int main()
{
	palindrome p;
	p.getdata();
}
