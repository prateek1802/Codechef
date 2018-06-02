#include<iostream>
#include<algorithm>
#include<cstring>
#include<string.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int x=n,r=0,y=0;

        while(x>0)
        {
            r=x%10;
            y=(y*10)+r;
            x/=10;
        }
        if(y==n)
            cout<<"wins"<<endl;
        else
            cout<<"losses"<<endl;
    }
	return 0;
}

