//write a c++ program to check the number is even or odd.
#include <iostream>
using namespace std;
class checker
{
public:
    void getdata()
    {
        int n;
        cout<<"ENTER THE VALUE OF AN INTEGER (EVEN OR ODD): ";
        cin>>n;
        if(n%2==0)
        {
            cout<<endl<<n<<" IS EVEN NUMBER";
        }
        else
        {
            cout<<endl<<n<<" IS ODD NUMBER";
        }
    }
};

int main()
{
    checker obj;
    obj.getdata();
}
