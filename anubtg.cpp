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
        int a[n],s=0;
        bool b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=false;
        }

        sort(a,a+n);

        for(int i=n-1;i>=0;i-=4)
        {
            b[i]=true;
            b[i-1]=true;
        }

        for(int i=0;i<n;i++)
        {
            if(b[i])
            {
                s+=a[i];
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
