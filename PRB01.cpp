#include<iostream>
#include<math.h>
using namespace std;
bool prime(int x)
{
    if(x<2)
        return false;
    for(int i=2;i<sqrt(x);i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}

int main()
{
    unsigned int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(prime(n))
        {
            cout<<"yes"<<endl;
        }
        else
            cout<<"no"<<endl;
    }
    return 0;
}
