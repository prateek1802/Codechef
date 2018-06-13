#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(a==0)
        return b;
    return gcd(b%a,a);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int x=a[0];
        for(int i=0;i<n-1;i++)
        {
            x=gcd(x,a[i+1]);
        }

        if(x==1)
            cout<<"0"<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
