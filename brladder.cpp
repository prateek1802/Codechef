#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a%2!=0)
        {
            if(a+1==b||a-2==b||a+2==b)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
        else
        {
            if(a-1==b||a-2==b||a+2==b)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
