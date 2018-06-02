#include<iostream>
using namespace std;
int a,b,c;

bool condition1()
{
    if(a+b+c==180)
        return true;
    else
        return false;
}

bool condition2()
{
    if(a!=0&&b!=0&&c!=0)
        return true;
    else
        return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(condition1()&&condition2())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

