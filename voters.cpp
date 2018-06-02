#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int a[100000],b[100000],c[100000],d[100000],cnt=0;
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }

    for(int i=0;i<n3;i++)
    {
        cin>>c[i];
    }

    for(int i=0;i<n2;i++)
    {
        a[n1+i]=b[i];
    }
    n1=n1+n2;

    for(int i=0;i<n3;i++)
    {
        a[n1+i]=c[i];
    }
    n1+=n3;

    sort(a,a+n1);
    int x=0;
    for(int i=0;i<n1-1;i++)
    {
        if(a[i]==a[i+1])
        {
            cnt++;
            if(a[i+1]==a[i+2])
            {
                i++;
            }
            d[x++]=a[i+1];
        }
    }
    cout<<x<<endl;
    for(int i=0;i<cnt;i++)
    {
        cout<<d[i]<<"\n";
    }
    return 0;
}
