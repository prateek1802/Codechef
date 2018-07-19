#include<bits/stdc++.h>
using namespace std;

int searc(int x,int a[],int n)
{
    for(int i=1;i<=n;i++)
    {
        if(a[i]==x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    for(int i=1;i<=n;i++)
    {
        int x=searc(i,a,n);
        cout<<searc(x,a,n)<<endl;
    }
    return 0;
}
