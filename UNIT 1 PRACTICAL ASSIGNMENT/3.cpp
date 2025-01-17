//WRITE A C++ PROGRAM TO ENTER THE VALUE FROM USER AND CHECK NUMBER IS +VE, -VE OR ZERO.
#include <iostream>
using namespace std;
class checker
{
public:
    void getdata()
    {
        int n;
        cout<<"ENTER THE VALUE OF A TO CHECK THE NUMBER IS +VE -VE OR ZERO: ";
        cin>>n;
        if(n==0)
        {
            cout<<endl<<n<<" IS ZERO";
        }
        else if(n<0)
        {
            cout<<endl<<n<<" IS NEGETIVE";
        }
        else
        {
            cout<<endl<<n<<" IS POSITIVE NUMBER";
        }
    }
};

int main()
{
    checker obj;
    obj.getdata();
}
