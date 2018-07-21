#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int l1=s1.length();
        int l2=s2.length();

        int x=127;
        int a[127]={0},b[127]={0};

        for(int i=0;i<l1;i++)
        {
            a[s1[i]-'\0']++;
        }

        for(int i=0;i<l2;i++)
        {
            b[s2[i]-'\0']++;
        }

        int ans=0;

        for(int i=0;i<x;i++)
        {
            ans+=min(a[i],b[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
