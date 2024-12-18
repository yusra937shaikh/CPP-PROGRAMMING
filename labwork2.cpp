#include<iostream>
using namespace std;
class result
{
   public:
     int rn,a,b,c,total;
     char name[8];
     float avrg;
     void func()
     {
        cout<<endl<<"ENTER THE NAME OF THE STUDENT:";
        cin>>name;
        cout<<endl<<"ENTER THE ROLL NO. OF THE STUDENT:";
        cin>>rn;
        cout<<endl<<"ENTER THE MARKS OF SUB 1:";
        cin>>a;
        cout<<endl<<"ENTER THE MARKS OF SUB 2:";
        cin>>b;
        cout<<endl<<"ENTER THE MARKS OF SUB 3:";
        cin>>c;
        total=a+b+c;
        cout<<endl<<"TOTAL IS:"<<total;
        avrg=total/3;
        cout<<endl<<"AVERAGE IS:"<<avrg;

        if(avrg>=80)
        	cout<<endl<<"GRADE:A";
        if(avrg>=70 && avrg<80)
        	cout<<endl<<"GRADE:B";
        if(avrg>=60 && avrg<70)
        	cout<<endl<<"GRADE:C";
        if(avrg>=50 && avrg<60)
        	cout<<endl<<"GRADE:D";
        if(avrg>=40 && avrg<50)
        	cout<<endl<<"GRADE:E";
        if(avrg<40)
        	cout<<endl<<"GRADE:FAIL!";
     }
};
int main()
{
	result y;
	y.func();
}
