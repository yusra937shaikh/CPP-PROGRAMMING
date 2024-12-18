#include<iostream>
using namespace std;
class si
{
   public:
   	int year;
   	float pa,rate,si;
   	void cal()
   	{
   		cout<<endl<<"ENTER THE PRINCIPAL AMOUNT:";
   		cin>>pa;
   		cout<<endl<<"ENTER THE RATE:";
   		cin>>rate;
   		cout<<endl<<"ENTER THE YEAR:";
   		cin>>year;
   		si=(pa*rate*year)/100;
   		cout<<endl<<"SIMPLE INTEREST IS:"<<si;
   	}

};
int main()
{
	si a;
	a.cal();
}
