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
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }

        int m1=-1,m2=-1,s1=0,s2=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>m1)
            {
                m1=a[i];
            }

            if(b[i]>m2)
            {
                m2=b[i];
            }

            s1+=a[i];
            s2+=b[i];
        }

        s1-=m1;
        s2-=m2;

        if(s1>s2)
            cout<<"Bob"<<endl;
        else if(s1==s2)
            cout<<"Draw"<<endl;
        else
            cout<<"Alice"<<endl;
    }
    return 0;
}
