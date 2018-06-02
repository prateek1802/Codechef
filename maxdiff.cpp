#include<iostream>
#include<algorithm>
#include<cstring>
#include<climits>
using namespace std;

int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int s1=0,s2=0,f1=0,f2=0;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);

        if(k<=n/2)
        {
            for(int i=0;i<k;i++)
            {
                s1=s1+a[i];
            }

            for(int i=k;i<n;i++)
            {
                f1=f1+a[i];
            }

            cout<<abs(f1-s1)<<endl;
        }

        else
        {
            for(int i=0;i<n-k;i++)
            {
                s1=s1+a[i];
            }

            for(int i=n-k;i<n;i++)
            {
                f1=f1+a[i];
            }

            cout<<abs(f1-s1)<<endl;
        }
    }
    return 0;
}
