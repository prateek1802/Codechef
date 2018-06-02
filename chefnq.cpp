#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],c=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int max_freq=1,freq=1;
        sort(a,a+n);
        if(n==1)
            cout<<"0\n";
        else
        {
            for(int i=0;i<n-1;i++)
            {
                if(a[i]==a[i+1])
                {
                    freq++;
                    if(freq>max_freq)
                    {
                        max_freq=freq;
                    }
                }
                else
                {
                    freq=1;
                }
            }

            cout<<n-max_freq<<"\n";
        }
    }
    return 0;
}
