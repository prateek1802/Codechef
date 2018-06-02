#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long int n,k,c=0;
        cin>>n>>k;
        unsigned long long int a[n],sum=0;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }

        for(int i=0;i<n;i++)
        {
            if(a[i]+k>sum-a[i])
            {
                c++;
            }
        }
        cout<<c<<"\n";
    }

    return 0;
}

